#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: list
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
		return;

	while ((*head)->next != NULL)
	{
		a = (*head)->next;
		free(*head);
		*head = a;
	}
	free(*head);
	*head = NULL;
}
