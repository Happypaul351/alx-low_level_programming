#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - function that search a string for any set of bytes
 * @accept: first string
 * @s: second string
 * Return: bytes
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; *(s + a) != '\0'; a++)
	{
		for (b = 0; *(accept + b) != '\0'; b++)
		{
			if (*(s + a) == *(accept + b))
				return (s + a);
		}
	}
	return ('\0');
}
