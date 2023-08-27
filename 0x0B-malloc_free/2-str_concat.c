#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: char
 */

char *str_concat(char *s1, char *s2)
{
	int a = 0, b = 0, con = 0;
	char *s0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	con = a + b;
	s0 = (char *) malloc((con + 1) * sizeof(char));
	if (s0 == 0)
		return (NULL);

	for (a = 0; a < con - b; b++)
		s0[a] = s1[a];
	for (b = 0; b <= con; b++, a++)
		s0[a] = s2[b];
	s0[a + 1] = '\0';
	return (s0);
}
