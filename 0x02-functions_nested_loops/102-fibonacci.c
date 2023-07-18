#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned int a, b, i;
	unsigned int result;

	a = 1;
	b = 2;
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", a);
		result = a + b;
		a = b;
		b = result;
	}

	return (0);
}
