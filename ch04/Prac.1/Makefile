main.c : main.c ./lib/libcal.a
	gcc -I./lib -L./lib -o main main.c -lcal
callib.a : ./lib/add.o ./lib/subtract.o ./lib/multiply.o ./lib/divide.o
	ar rcs ./lib/libcal.a ./lib/add.o ./lib/subtract.o ./lib/multiply.o ./lib/divide.o
add.o : add.c
	gcc -c ./lib/add.o
subtract.o : subtract.c
	gcc -c ./lib/subtract.o
multiply.o : multiply.c
	gcc -c ./lib/multiply.o
divide.o : divide.c
	gcc -c ./lib/divide.o
