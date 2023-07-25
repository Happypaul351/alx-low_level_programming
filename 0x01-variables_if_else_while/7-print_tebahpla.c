#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0
 */

int main(void)
{
	char rev = 'z';

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
