#!/bin/sh

AS=arm-unknown-linux-gnueabi-as
OBJCOPY=arm-unknown-linux-gnueabi-objcopy

SEQUENCE_GENERATOR=../src/sequence-generator/sequence-generator

TEMPLATE_DIR=../arm-vfp
TEMPLATES=`cd ${TEMPLATE_DIR} && ls *.templates`

SEED=$1
COUNT=$2
MPWD=`pwd`

cd ${TEMPLATE_DIR} && ${SEQUENCE_GENERATOR} arm ${COUNT} ${SEED} ${TEMPLATES} > ${MPWD}/sequence-$1.S

cd ${MPWD} && ${AS} sequence-$1.S -o sequence-$1.o
cd ${MPWD} && ${OBJCOPY} -O binary sequence-$1.o sequence-$1.bin

cd ${MPWD} && rm sequence-$1.o sequence-$1.S
