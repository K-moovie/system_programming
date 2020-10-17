#!/bin/bash
#for.sh

for ((i=1;i<10;i++))
do
	for ((j=1;j<10;j++))
	do
		echo -n "$i * $j = "
		echo -n " `expr $i \* $j` "
	done
	echo ""
done
