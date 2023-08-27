#include <stdio.h>
#include "main.h"

/**
 * _puts - functions that prints a string to the stdout
 * @str: the string
 * Return: 0
 */

void _puts(char *str)
{
	int a = 0;

	while (*(str + a) != '\0')
	{
		putchar(*(str + a));
		a++;
	}
	putchar(10);
}
