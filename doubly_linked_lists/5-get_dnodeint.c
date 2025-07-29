#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a linked list
 * @head: the list to find the node in
 * @index: the index of the node
 *
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *finder = head;
	unsigned int i;

	if (head)
	{
		while (finder != NULL)
		{
			if (i == index)
				return (finder);

			finder = finder->next;
			i++;
		}
	}
	return (NULL);
}
