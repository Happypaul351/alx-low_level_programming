#include <stdio.h>
#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: destination
 * @src: source
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int delen = 0, a;

	while (dest[delen])
	{
		delen++;
	}

	for (a = 0; src[a] != 0; a++)
	{
		dest[delen] = src[a];
		delen++;
	}
	dest[delen] = '\0';
	return (dest);
}
