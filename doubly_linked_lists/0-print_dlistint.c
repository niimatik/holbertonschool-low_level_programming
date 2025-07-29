#include "lists.h"

/**
 * print_dlistint - print the element of a list
 * @h: the list to print the elements of
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
