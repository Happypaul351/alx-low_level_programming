#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion - function that prints a string follow by a new line
 * @s: the string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_puts_recursion(s - 1);
	}
	puts(s);
}
