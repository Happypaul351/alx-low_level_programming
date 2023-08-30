#include "lists.h"

/**
 * sum_listint - sum all the integers
 * @head: list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int add;
	listint_t *temp;

	if (head == NULL)
		return (0);

	add = 0, temp = head;
	while (temp != NULL)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}
