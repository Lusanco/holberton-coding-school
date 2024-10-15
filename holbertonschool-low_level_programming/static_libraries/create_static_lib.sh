#!/bin/bash

for file in *.c; do
	gcc -c "$file" -o "${file%.c}.o"
done

ar rc liball.a *.o;
ranlib liball.a;
