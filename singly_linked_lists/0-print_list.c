#include "lists.h"

/**
 * print_list - print the element of a list
 * @h: the list to print the elements of
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%i] (nil)\n", h->len);
		}
		else
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
