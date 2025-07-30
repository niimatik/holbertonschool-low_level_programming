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
	dlistint_t *current = NULL, *added = NULL;
	unsigned int i = 0, length = 0;

	if (h == NULL)
		return (NULL);

	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));

	length = dlistint_len(*h);
	if (idx == 0)
		return (add_dnodeint(h, n));

	else if (length == idx)
		return (add_dnodeint_end(h, n));

	current = *h;
	while (current != NULL)
	{
		if (i == idx)
		{
			added = create_node(n, current, current->prev);
			current->prev = added;
			current = added;
			current->prev->next = added;
			return (added);
		}

		current = current->next;
		++i;
	}

	return (current);
}

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h != NULL)
	{
		++lenght;
		h = h->next;
	}

	return (lenght);
}

/**
  * create_node - Create a new node with values
  * @n: The number of the new node
  * @next: The next node of the new node
  * @prev: The previous node of the new node
  *
  * Return: The address of the new node created
  */
dlistint_t *create_node(unsigned int n, void *next, void *prev)
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