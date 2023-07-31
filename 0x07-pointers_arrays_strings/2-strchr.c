#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in string
 * @s: string
 * @c: character
 * Return: char c
 */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return (NULL);
}

