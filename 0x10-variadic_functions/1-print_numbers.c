#include "variadic_functions.h"

/**
 * print_numbers - print all the parameters passed to it
 * @separator: in between numbers i print a string
 * @n: number of args passed
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list meters;

	va_start(meters, n);
	if (n != 0)
	{
		for (a = 0; a < n; a++)
		{
			if (a != n - 1)
			{
				if (separator != NULL)

					printf("%d%s", va_arg(meters, int), separator);
				else
					printf(" % d", va_arg(meters, int));
			}
			else
			{
				printf( " % d", va_arg(meters, int));
			}
		}
	}
	printf("\n");
	va_end(meters);
}
