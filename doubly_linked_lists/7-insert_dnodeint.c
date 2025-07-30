#include "lists.h"

/**
 * insert_dnodeint_at_index - add a node at index
 * @h: the listto add the node in
 * @idx: where to put the node
 * @n: the node to add
 *
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *added = NULL, *current = *h;
	unsigned int i = 0;

	if (*h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL)
	{
		if (i == idx)
		{
			added = creat_node( n, current, current->prev);
			current->prev = added;
			current = added;
			current->prev->next = added;
			return (added);
		}
		current = current->next;
		i++;
	}
	return (current);
}

/**
 * creat_node - create a node
 * @n: the node to create
 * @next: the next node
 * @prev: the previous node
 *
 * Return: the node created
 */

dlistint_t *creat_node(unsigned int n, void *next, void *prev)
{
	dlistint_t *added = NULL;

	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	added->next = next;
	added->prev = prev;
	return (added);
}
