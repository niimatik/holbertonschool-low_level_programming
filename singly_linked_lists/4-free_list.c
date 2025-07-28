#include "lists.h"

/**
 * free_list - free the list
 * @head: list to free
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *freed;
	while (freed->next)
	{
		freed =
		free(freed->len)
	}
}
