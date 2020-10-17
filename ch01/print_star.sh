#!/bin/bash
#print_star.sh

for ((i=5;i>0;i--))
do 
	for ((j=i;j>0;j--))
	do
		echo -n "*"
	done
	echo ""
done
