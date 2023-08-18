#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: type of argument passed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int a = 0, tail_arg;
	char type;
	va_list meters;

	va_start(meters, format);
	while ((format != NULL) && (format[a]))
	{
		tail_arg = count_dataformat(format);
		type = *(format + a);
		switch (type)
		{
			case 'c':
				printf("%c", va_arg(meters, int));
				print_seperator(a, tail_arg);
				a++;
				break;
			case 'i':
				printf("%d", va_arg(meters, int));
				print_seperator(a, tail_arg);
				a++;
				break;
			case 'f':
				printf("%f", va_arg(meters, double));
				print_seperator(a, tail_arg);
				a++;
				break;
			case 's':
				printf("%s", change_tonil(va_arg(meters, char *)));
				print_seperator(a, tail_arg);
				a++;
				break;
			default:
				a++;
			break;
		}
	}
	printf("\n");
	va_end(meters);
}
/**
 * count_dataformat - sum valid dats type format
 * @format: format
 * Return: the count
 */
int count_dataformat(const char * const format)
{
	int a = 0, b = 0;
	char datatype;

	while ((*(format + b) != '\0') && (format != NULL))
	{
		datatype = *(format + b);
		switch (datatype)
		{
			case 'c':
				a = b;
				b++;
				break;
			case 'i':
				a = b;
				b++;
				break;
			case 'f':
				a = b;
				b++;
				break;
			case 's':
				a = b;
				b++;
				break;
			default:
				b++;
			break;
		}
	}
	return (a);
}

/**
 * print_seperator - prints a comma and space
 * @g: the first
 * @h: the second
 * Return: void
 */
void print_seperator(int g, int h)
{
	if (g != h)
	{
		printf(", ");
	}
}

/**
 * change_tonil - change s to nul
 * @s: string
 *
 * Return: pointer to s
 */
char *change_tonil(char *s)
{
	if (s == NULL)
		s = "(nil)";

	return (s);
}
