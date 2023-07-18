#include <stdio.h>

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int x = 0, y;

	while (x < 10)
	{
		y = 'a';

		while (y <= 'z')
		{
			putchar(y);
			y++;
		}
		putchar('\n');
		x++;
	}
}
