#include "lists.h"

/**
 * free_list - free the list
 * @head: list to free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *freed = head;

	while (head)
	{
		freed = head;
		head = head->next;
		free(freed->str);
		free(freed);
	}
}
