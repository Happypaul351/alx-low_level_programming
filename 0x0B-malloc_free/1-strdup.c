#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocate
 * d space in memory, which contains a copy of the string give
 * n as a parameter.
 * @str: the string
 * Return: char
 */

char *_strdup(char *str)
{
	char *ptr;
	int a;
	int b;

	if (str == NULL)
		return (NULL);

	for (b = 0; str[b] != '\0'; b++)
		;
	ptr = (char *)malloc(sizeof(char) * (b + 1));
	if (ptr == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
	{
		ptr[a] = str[a];
	}
	return (ptr);
}
