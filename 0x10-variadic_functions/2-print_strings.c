#include "variadic_functions.h"

/**
 * print_strings - print the string
 * @separator: to be printed between strings
 * @n: number of args passed
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
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
printf("%s%s", change_to_nil(va_arg(meters, char *)), separator);
else
printf("%s", change_to_nil(va_arg(meters, char *)));
}
else
{
printf("%s", change_to_nil(va_arg(meters, char *)));
}
}
}
printf("\n");
va_end(meters);

/**
 * change_to_nil - make s to nil if s is null
 * @s: string
 * Return: pointers to s
 */
char *change_to_nil(char *s)
{
if (s == NULL)
s = "(nil)";
return (s);
}
