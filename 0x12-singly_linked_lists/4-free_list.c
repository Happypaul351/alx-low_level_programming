#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: the head to be freed
 * Return: the freed list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
