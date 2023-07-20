#include <stdio.h>

/**
 * print_numbers - function that print the numbers
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	for (a = 0; a <= 9; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
