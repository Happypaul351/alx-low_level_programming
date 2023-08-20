#include "function_pointers.h"

/**
 * int_index - function that search for an integer
 * @array: element to be counted
 * @size: number of element to be counted in the array
 * @cmp: function that compares value
 * Return: -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
