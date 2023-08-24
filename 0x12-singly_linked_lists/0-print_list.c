#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *list;
	size_t a;

	a = 0;
	list = h;
	while (list != NULL)
	{
		printf("[%d] %s\n", list->len, list->str);
		list = list->next;
		a++;
	}

	return (a);
}
