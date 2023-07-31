#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that print the numbers
 * Return: 0
 */

void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
