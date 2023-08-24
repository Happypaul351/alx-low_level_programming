#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: the head
 * @str: the string
 * Return: address of new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;

	nnode = malloc(sizeof(list_t));
	if (nnode != NULL)
	{
		nnode->str = strdup(str);
		nnode->len = _strlen(str);
		nnode->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		nnode->next = *head;
	*head = nnode;
	return (nnode);

}

/**
 * _strlen - length of the string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int a = 0;

	while (str[a]  != '\0')
		a++;
	return (a);
}
