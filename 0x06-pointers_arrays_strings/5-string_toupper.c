#include <stdio.h>
#include "main.h"

/**
 * string_toupper - change lowercase letter to upper
 * @: to change string
 * Return: char
 */

char *string_toupper(char *)
{
	int b = 0;

	while ([b] != '\0')
	{
		if ([b] >= 'a' && [b] <= 'z')
			[b] -= 32;
		b++;
	}
	return (0);
}
