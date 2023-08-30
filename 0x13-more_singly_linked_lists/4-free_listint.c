#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of list
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *a;

	while (head != NULL)
	{
		a = head->next;
		free(head);
		head = a;
	}
}
