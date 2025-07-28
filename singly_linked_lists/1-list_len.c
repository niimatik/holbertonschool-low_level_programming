#include "lists.h"

/**
 * list_len - return the number of element in a linked list
 * @h: the list to return the number of elements
 *
 * Return: the number of element of the list
 */

 size_t list_len(const list_t *h)
 {
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
 }
