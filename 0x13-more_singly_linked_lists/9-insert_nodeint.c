#include "lists.h"

/**
 * insert_nodeint_at_index - add node to list
 * @head: the list
 * @idx: index
 * @n: int
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *tempnode, *new;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		*head = new, new->next = NULL, new->n = n;
		return (new);
	}
	else if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->next = *head, new->n = n, *head = new;
		return (new);
	}

	a = 1, idx++, tempnode = *head;
	while (a < idx - 1 && tempnode->next != NULL)
		tempnode = tempnode->next,	a++;
	if (a != idx - 1)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = tempnode->next;
	tempnode->next = new;

	return (new);
}
