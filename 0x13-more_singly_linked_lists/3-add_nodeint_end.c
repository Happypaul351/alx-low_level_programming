#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head
 * @n: int
 * Return: last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *tmp;

	if (head == NULL)
		return (NULL);
	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		free(end);
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	tmp = *head;
	if (tmp == NULL)
		*head = end;
	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = end;
	}
	return (end);
}
