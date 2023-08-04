#include <stdio.h>
#include "main.h"

/**
 * _memset - function that fills memory
 * @s: memory
 * @b: constant
 * @n: bytes of the memory area
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(s + a) = b;
	return (s);
}
