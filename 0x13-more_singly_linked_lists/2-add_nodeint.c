#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a
 * listint_t list
 * @head: double pointer to the head node
 * @n: int value
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *alt;
	listint_t *neue;

	alt = *head;
	neue = malloc(sizeof(listint_t));
	if (neue == NULL)
		return (NULL);
	neue->n = n;
	*head = neue;

	if (alt == NULL)
		neue->next = NULL;
	else
		neue->next = alt;

	return (neue);
}
