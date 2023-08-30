#include "lists.h"

/**
 * get_nodeint_at_index - return the nth
 * @head: list
 * @index: index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int counter = 0;

	node = head;
	if (node != NULL)
	{
		while (node)
		{
			if (index == counter)
				return (head);

			node =  node->next;
			head = node;
			counter++;
		}
	}
	else
	{
		return (NULL);
	}

	return (node);
}

