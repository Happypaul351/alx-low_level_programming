#include "main.h"

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char
 * @size: the size
 * @c: the char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int idx;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (idx = 0; idx < size; idx++)
		array[idx] = c;

	return (array);
}
