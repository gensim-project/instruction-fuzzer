#ifndef _HARNESS_H
#define _HARNESS_H

#include "Descriptor.h"

#include <string>

extern void HarnessPrepareTest(const Descriptor &test);
extern void HarnessRunTest(const Descriptor &test, Descriptor *&output);
extern void HarnessInitialize();
extern void HarnessShutdown();

extern std::string HarnessFormatResult(const Descriptor &test, const Descriptor &result);

#endif
