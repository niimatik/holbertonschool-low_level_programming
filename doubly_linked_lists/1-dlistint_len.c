#include "lists.h"

/**
 * dlistint_len - return the number of element in a linked list
 * @h: list to count the elements of
 *
 * Return: the number of element in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
