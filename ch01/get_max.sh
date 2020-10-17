#!/bin/bash
#get_max.sh

echo "첫 번째 입력"
read first
echo "두 번쩨 입력"
read second
echo "세 번째 입력"
read third
max=$first
min=$first

if [ $first -le $second ]
then
	max=$second
else
	min=$second
fi

if [ $max -le $third ]
then
	max=$third
fi

if [ $min -ge $third ]
then
	min=$third
fi

echo "최대값: $max"
echo "최소값: $min"
  
