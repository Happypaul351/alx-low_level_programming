#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the head
 * @str: the string
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t nnode;
	int a;

	for (a = 0; dub_string[a] != '\0'; a++)
		;
	nnode = malloc(sizeof(list_t));
	if (nnode == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->str = strdup(str);
	if (nnode->str == NULL)
	{
		free(nnode);
		return (NULL);
	}
	nnode->len = a;
	nnode->next = *head;

	*head = nnode;
	return (*head);
}
