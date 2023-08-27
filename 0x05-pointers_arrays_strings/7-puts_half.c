#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: nothing
 */

void puts_half(char *str)
{
	int a, length = _strlen(str);

	for (a = ((length - 1) / 2) + 1; a < length; a++)
		putchar(*(str + a));
	putchar(10);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;

	return (length);
}
