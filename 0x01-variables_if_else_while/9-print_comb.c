#include <stdio.h>

/**
 * main - the entry point of the program
 * Return: 0
 */

int main(void)
{
	int comb = 0;

	while (comb <= 9)
	{
		putchar(comb + '0');
		if (comb < 9)
		{
			putchar (',');
			putchar(' ');
		}
		comb++;
	}
		putchar('\n');
	return (0);
}
