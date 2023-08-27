#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverse the content of array
 * @a: array
 * @n: number of elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int temp, idx;

	for (idx = n - 1; idx > n / 2; idx--)
	{
		temp = a[n - 1 - idx];
		a[n - 1 - idx] = a[idx];
		a[idx] = temp;
	}
}
