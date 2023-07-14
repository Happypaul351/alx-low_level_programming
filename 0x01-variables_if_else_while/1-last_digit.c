#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - the entry point
 * Return: 0
 */

int main(void)
{
	int n = 6;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
		printf("the last digit of n and is greater than 5");
	}
	else if	(n == 0)
	{
		printf("the last digit of n and is 0");
	}
	else
	{
		printf("the last digit of n and is less than 6 and not 0");
	}
	return (0);
}
