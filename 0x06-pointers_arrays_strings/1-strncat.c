#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenate two strings
 * @dest: the destination
 * @src: source
 * @n: limit
 * Return: a pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int delen = 0, a = 0;

	while (dest[delen])
	{
		delen++;
	}

	while (a < n && src[a])
	{
		dest[delen] = src[a];
		delen++;
		a++;
	}

	dest[delen + n + 1] = '\0';
	return (dest);
}
