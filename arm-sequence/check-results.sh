#!/bin/sh

NAME=$1
FN1=$2
FN2=$3

ECHO=/usr/bin/echo

RESULT=""
RESET_COLOUR="\e[0m"
COLOUR="\e[31m"


if [ ! -f "$FN1" ]; then
	RESULT="MISSING"
	COLOUR="\e[31m"
elif [ ! -f "$FN2" ]; then
	RESULT="MISSING"
	COLOUR="\e[31m"
else

	SIZE_1=`du -sb $FN1 | cut -f1`
	SIZE_2=`du -sb $FN2| cut -f1`

	if [ $SIZE_1 -eq $SIZE_2 ]; then
		
		if diff -q $FN1 $FN2 >/dev/null; then
			RESULT="OK!"
			COLOUR="\e[32m"
			exit 0
		else
			RESULT="ERROR"
		fi
		
	else
		RESULT="SIZE"
	fi

fi

/usr/bin/printf "%8s %b%s%b\n" $1 $COLOUR $RESULT $RESET_COLOUR
