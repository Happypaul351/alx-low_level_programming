#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	b = n;

	if (b > 0)
	{
		printf(" b is positive\n");
	}
	else if (b == 0)
	{
		printf(" 0 is zero\n");
	}
	else
	{
		printf(" b  is negative\n");
	}
	return (0);
}
