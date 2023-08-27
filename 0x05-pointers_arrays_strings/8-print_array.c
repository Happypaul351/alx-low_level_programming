#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integer
 * @a: the array
 * @n: the element
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int element;

	for (element = 0; element < n; element++)
	{
		if (element != n - 1)
			printf("%d, ", a[element]);
		else
			printf("%d", a[element]);
	}
	putchar(10);
}
