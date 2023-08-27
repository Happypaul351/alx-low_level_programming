#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: the buffer
 * @size: size of buffer
 */

void print_buffer(char *b, int size)
{
	int a = 0, j;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (a < size)
	{
		if (a % 10 == 0)
			printf("%08x: ", a);
		for (j = a; j < a + 9; j += 2)
		{
			if ((j < size) && ((j + 1) < size))
				printf("%02x%02x: ", b[j], b[j + 1]);
			else
			{
				while (++j <= a + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (j = a; j < a + 9 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}
		printf('\n');
		a += 10;
	}
}

