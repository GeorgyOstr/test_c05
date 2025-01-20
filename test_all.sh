#!/bin/bash
norminette ../c05/*/ft*.c
echo

for i in ex{00..02}
do
	echo "$i Compiling..."
	cc -Wall -Werror -Wextra $i/*.c ../c05/$i/*.c -o compile_$i
	echo "$i Compiled! Executing..."
	./compile_$i
	echo "$i Finished!"
	echo
done
