#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy the string pointed to
 * @dest: destination pointer
 * @src: the source pointer
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int string = 0;

	while (*(src + string) != '\0')
	{
		*(dest + element) = *(src + element);
		element++;
	}
	*(dest + element) = '\0';

	return (dest);
}
