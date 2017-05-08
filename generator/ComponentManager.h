/*
 * ComponentManager.h
 *
 *  Created on: 9 Dec 2013
 *      Author: harry
 */

#ifndef COMPONENTMANAGER_H_
#define COMPONENTMANAGER_H_

#include <map>
#include <string>
#include <sstream>

template <typename T, typename... Args> class ComponentManager
{
public:
	typedef T* (*t_factory_t)(Args &...);

	struct FactoryStruct {
		t_factory_t FactoryFn;
		std::string Description;
	};

	typedef std::map<std::string, FactoryStruct> FactoryMap;

	static FactoryMap Factories;

	static T *Instantiate(std::string str, Args & ... args)
	{
		if (Factories.find(str) != Factories.end()) return Factories.at(str).FactoryFn(args...);
		return 0;
	}

	static void Register(std::string name, std::string desc, t_factory_t factory)
	{
		FactoryStruct f;
		f.FactoryFn = factory;
		f.Description = desc;
		Factories[name] = f;
	}

	static void Dump(std::ostringstream &str)
	{
		str << "Registered Components: " << std::endl;
		str << "================================================================================" << std::endl;
		for(const auto &f : Factories) {
			str << "\t" << f.first << "\t\t" << f.second.Description << std::endl;
		}
		str << "================================================================================" << std::endl;
	}
};

template<typename BaseType, typename T, typename... Args> BaseType* ComponentFactory(Args& ... args)
{
	return (BaseType*)new T(args...);
}

template<typename BaseType, typename... Args> bool GetComponentInstance(std::string name, BaseType *& out, Args& ... args)
{
	BaseType *p = ComponentManager<BaseType, Args...>::Instantiate(name, args...);
	if (p) {
		out = p;
		return true;
	}
	else
		return false;
}

template<typename BaseType, typename... Args> std::string GetRegisteredComponents(BaseType *, Args& ... args)
{
	std::ostringstream str;
	ComponentManager<BaseType, Args...>::Dump(str);
	return str.str();
}

#define DefineComponentType(Type, ...) \
	template<> ComponentManager<Type, ##__VA_ARGS__>::FactoryMap ComponentManager<Type, ##__VA_ARGS__>::Factories __attribute__((init_priority(102))) = ComponentManager<Type, ##__VA_ARGS__>::FactoryMap();

#define DumpComponents(stream, Type, ...) \
        template<> ComponentManager<Type, ##__VA_ARGS__>::Dump(stream)

#define RegisterComponent(BaseType, Type, Name, Description, ...) \
	namespace __##Type { \
	class ComponentRegistrationHelper \
	{ public: ComponentRegistrationHelper() { ComponentManager<class BaseType, ##__VA_ARGS__>::Register(Name, Description, ComponentFactory<class BaseType, class Type, ##__VA_ARGS__>); } \
	};\
	static ComponentRegistrationHelper singleton __attribute__((init_priority(103))) = ComponentRegistrationHelper(); \
	}


#endif /* COMPONENTMANAGER_H_ */
