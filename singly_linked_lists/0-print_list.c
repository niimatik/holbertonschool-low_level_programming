#include "lists.h"

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
