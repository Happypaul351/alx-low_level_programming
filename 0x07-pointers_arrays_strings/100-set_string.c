#include <stdio.h>
#include "main.h"

/**
 * set_string - function that set the value of a pointer to char
 * @s: source
 * @to: target
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
