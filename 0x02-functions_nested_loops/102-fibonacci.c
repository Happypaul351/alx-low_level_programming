#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int a, b;
	int result;

	a = 1;
	b = 2;
	for (a = 1; a <= 50; a++)
	{
		printf("%d, ", a);
		result = a + b;
		a = b;
		b = result;
	}

	return (0);
}
