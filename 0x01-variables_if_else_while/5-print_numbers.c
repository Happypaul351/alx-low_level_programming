#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0
 */

int main(void)
{
	char digit = 0;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');
	}
	putchar('\n');
	return (0);
}
