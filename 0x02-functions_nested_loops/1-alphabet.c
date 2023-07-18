#include <stdio.h>
#include <unistd.h>

/**
 * print_alphabet - print the alphabet in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

}
