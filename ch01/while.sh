#!/bin/bash
#while.sh

i=1
j=1
while [ $i -lt 10 ]
do
	while [ $j -lt 10 ]
	do
		echo -n "$i * $j = "
		echo -n "`expr $i \* $j` "
		((j += 1 ))
	done
	((i += 1 ))
	((j = 1 ))
	echo ""
done
