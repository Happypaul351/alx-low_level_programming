#include <stdio.h>

/**
 * print_numbers - function that print the numbers
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
