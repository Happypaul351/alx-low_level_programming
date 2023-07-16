#include <stdio.h>

/**
 * main - entry point
 * Return: 0.
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('a' + 0);
	putchar('\n');

	return (0);
}
