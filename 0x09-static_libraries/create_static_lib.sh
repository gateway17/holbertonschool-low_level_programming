#!/bin/bash

gcc -Wall -Wextra -Werror -pedantic -c *.c
if [ "$?" == "0" ];then
	ar -rc liball.a *.o &&
	ranlib liball.a
else
	echo "Error compiling .c files."
	exit 1

fi
