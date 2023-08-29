#include "lists.h"

/**
 * print_listint - prinnts all the elements of a listint_t
 * @h: head of the list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *a;
	size_t counter;

	for (a = h, counter = 0; a != NULL; counter++, a = a->next)
		printf("%d\n", a->next);

	return (counter);
}
