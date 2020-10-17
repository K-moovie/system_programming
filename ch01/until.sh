#!/bin/bash
#until.sh

i=1
j=1
until  [ $i -ge 10 ]
do
	until [ $j -ge 10 ]
	do
		echo -n "$i * $j = "
		echo -n " `expr $i \* $j` "
		((j += 1 ))
	done
	((i += 1 ))
	((j = 1 ))
	echo ""
done
