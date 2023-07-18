#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	int ch = 'a';

	for (ch = 0; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar("\n");

}
