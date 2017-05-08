#!/bin/bash

for f in $1/results/*.qemu; do
    name=$(basename "$f" .qemu)
    source ./check-results.sh $name $1
done

