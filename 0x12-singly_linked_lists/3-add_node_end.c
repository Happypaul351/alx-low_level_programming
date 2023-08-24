#include "lists.h"

/**
 * add_node_end - function that add node at the end of the linked list
 * @head: head of the linked list
 * @str: the string
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nnode;
	list_t *arrow = *head;

	nnode = malloc(sizeof(list_t));
	if (nnode != NULL)
	{
		nnode->str = strdup(str);
		nnode->len = _strlen(str);
		nnode->next = NULL;
	}
	else
		return (NULL);
	if (arrow != NULL)
	{
		while (arrow->next != NULL)
			arrow = arrow->next;
		arrow->next = nnode;
	}
	else
		*head = nnode;
	return (nnode);
}

/**
 * _strlen - calculate the length of the string
 * @str: string
 * Return: the length
 */

int _strlen(const char *str)
{
	int a = 0;

	while (str[a] != '\0')
		a++;
	return (a);
}
