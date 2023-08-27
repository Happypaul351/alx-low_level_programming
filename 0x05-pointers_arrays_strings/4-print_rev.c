#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
		putchar(*(s + length));
	putchar(10);
}
