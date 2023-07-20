#include <stdio.h>

/**
 * more_numbers - function that print 10 times the number
 * Return: 0
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			putchar('n' + 0);
			j++;
		}
		putchar('\n');
		i++;
	}
	putchar('\n');
}
