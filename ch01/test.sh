#!/bin/bash
#test.sh

files=`ls`

for file in $files
do
	if [ -f  $file ]
		then 
		echo "$file"
	fi
done
