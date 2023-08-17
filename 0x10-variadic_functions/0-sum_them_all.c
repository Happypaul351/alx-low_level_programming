#include "variadic_functions.h"

/**
 * sum_them_all - add all parameters
 * @n: the number of parameter
 * Return: sum of the parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	int add = 0;
	unsigned int a;
	va_list params;

	va_start(params, n);
	if (n != 0)
	{
		for (a = 0; a < n; a++)
			add += va_arg(params, int);
	}
	va_end(params);

	return (add);
}
