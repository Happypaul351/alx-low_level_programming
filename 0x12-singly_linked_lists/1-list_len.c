#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list
 * @h: the head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *list;
	size_t a;

	a = 0;
	list = h;
	while (list != NULL)
	{
		list = list->next;
		a++;
	}

	return (a);
}
