#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print the number from 0 - 9
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int num;

	num = 0;

	while (num <= 9)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
