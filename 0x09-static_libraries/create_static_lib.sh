#!/bin/bash

gcc -c 0-isupper.c 1-isdigit.c 0-putchar.c 3-islower.c 4-isalpha.c 6-abs.c 2-strlen.c 3-puts.c 9-strcpy.c 100-atoi.c 0-strcat.c 1-strncat.c 2-strncpy.c 3-strcmp.c 0-memset.c 1-memcpy.c 2-strchr.c 3-strspn.c 4-strpbrk.c 5-strstr.c -o 0-isupper.o 1-isdigit.o 0-putchar.o 3-islower.o 4-isalpha.o 6-abs.o 2-strlen.o 3-puts.o 9-strcpy.o 100-atoi.o 0-strcat.o 1-strncat.o 2-strncpy.o 3-strcmp.o 0-memset.o 1-memcpy.o 2-strchr.o 3-strspn.o 4-strpbrk.o 5-strstr.o 
ar -rc liball.a *.o
ranlib liball.a
