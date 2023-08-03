#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y
 * @x: power 1
 * @y: power 2
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	int temp;

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	temp = _pow_recursion(x, y / 2);

	if (y % 2 == 1)
		return (temp * temp * x);

	return (temp * temp);
}
