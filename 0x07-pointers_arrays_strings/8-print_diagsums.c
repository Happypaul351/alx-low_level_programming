#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that print the sum of two diagsums
 * @a: input
 * @size: matrix
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
int b, sumC = 0, sumD = 0;

for (b = 0; b < (size * size); b++)
{
if (b % (size + 1) == 0)
sumC += *(a + b);

if (b % (size - 1) == 0 && b != 0 && b < size * size - 1)
sumC += *(a + b);
}
printf("%d, %d\n", sumC, sumD);
}
