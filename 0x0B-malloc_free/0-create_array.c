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
	char *apple;
	unsigned int idx;

	idx = 0;

	if (size == 0)
		return (NULL);
	apple = malloc(sizeof(char) * size);

	if (apple == NULL)
		return (NULL);

	while (idx < size)
	{
		*(apple + idx) = c;
		idx++;
	}

	return (apple);
}
