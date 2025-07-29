#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of the list
 * @head: the list to add the node in
 * @n: the node to add
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added = NULL, *current = NULL;

	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	if (*head)
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;

		added->next = NULL;
		added->prev = current;
		current->next = added;
		return (added);
	}
	added->next = *head;
	added->prev = NULL;
	*head = added;
	return (*head);
}
