#include "lists.h"

/**
 * pop_listint - function to remove the head node
 * @head: pointer to the pointer
 * Return: the value
 */

int pop_listint(listint_t **head)
{
	int a;

	listint_t *del_node;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	del_node = *head;
	next_node = (*head)->next;

	a = del_node->n;
	*head = next_node;
	free(del_node);

	return (a);
}
