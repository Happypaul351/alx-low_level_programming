#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list
 * @h: linked list head
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *a;
	size_t counter;

	for (a = h, counter = 0; a != NULL; counter++, a = a->next)
		;

	return (counter);
}
