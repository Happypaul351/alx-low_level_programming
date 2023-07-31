#include <stdio.h>
#include "main.h"

/**
 * _memcpy - function that copies a memory
 * @dest: memory area
 * @src: source
 * @n: bytes memory area
 * Return: dext
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		*(dest + a) = *(src + a);

	return (dest);
}
