#!/bin/bash
#fibonacci.sh

echo "출력할 수열을 입력하세요"
read n
first=0
second=1
i=2

echo -n "$first "
echo -n "$second "

while [ $i -lt $n ]
do 
	i=`expr $i + 1`
	result=$(($first + $second))
	echo -n "$result "
	first=$second
	second=$result
done
echo ""
