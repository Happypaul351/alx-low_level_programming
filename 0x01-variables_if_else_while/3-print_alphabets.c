#include <stdio.h>

/**
 * main - entry point
 * Return: 0.
 */

int main(void)
{
	int alpbet = 'a';

	while (alpbet <= 'Z')
	{
		putchar(alpbet);
	}
	putchar(alpbet++);
	putchar('\n');

	return (0);
}
