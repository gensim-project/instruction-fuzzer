#!/bin/sh

FN1="./$2/results/$1.arcsim"
FN2="./$2/results/$1.qemu"

ECHO=/usr/bin/echo

SIZE_1=`du -sb $FN1 | cut -f1`
SIZE_2=`du -sb $FN2| cut -f1`

RESULT=""
RESET_COLOUR="\e[0m"
COLOUR="\e[31m"

if [ $SIZE_1 -eq $SIZE_2 ]; then
	
	if diff -q $FN1 $FN2 >/dev/null; then
		RESULT="OK!"
		COLOUR="\e[32m"
	else
		RESULT="ERROR"
	fi
	
else
	RESULT="SIZE"
fi

/usr/bin/printf "%8s %b%s%b\n" $1 $COLOUR $RESULT $RESET_COLOUR
