#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int a, b, i;
	int result;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", b);
		result = a + b;
		a = b;
		b = result;
	}

	return (0);
}
