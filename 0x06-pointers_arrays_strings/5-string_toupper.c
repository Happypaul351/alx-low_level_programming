#include <stdio.h>
#include "main.h"

/**
 * string_toupper - change lowercase letter to upper
 * @p: to be modified
 * Return: char
 */

char *string_toupper(char *)
{
	int b = 0;

	while (p[b])
	{
		if (p[b] >= 97 && p[b] <= 122)
		{
			p[b] -= 32;
		}
		b++;
	}
	return (p);
}
