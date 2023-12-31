#include <stdio.h>
#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: the first
 * @s2: the second
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0, diff = 0;

	while (1)
	{
		if (s1[a] == '\0' && s2[a] == '\0')
			break;
		else if (s1[a] == '\0')
		{
			diff = s2[a];
			break;
		}
		else if (s2[a] == '\0')
		{
			diff = s1[a];
			break;
		}
		else if (s1[a] != s2[a])
		{
			diff = s1[a] - s2[a];
			break;
		}
		else
			a++;
	}
	return (diff);
}
