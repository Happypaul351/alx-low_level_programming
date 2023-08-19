#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: to be printed
 * @f: the function from which the name is printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
