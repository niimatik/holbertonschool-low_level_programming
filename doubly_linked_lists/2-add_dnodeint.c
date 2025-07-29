#include "lists.h"

/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: the list to add the node in
 * @n: the node to add
 *
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *added = NULL;

	added = malloc(sizeof(dlistint_t));
	if (added == NULL)
		return (NULL);

	added->n = n;
	if (*head)
	{
		added->next = *head;
		added->prev = (*head)->prev;
		(*head)->prev = added;
		*head = added;
		return (*head);
	}
	added->next = *head;
	added->prev = NULL;
	*head = added;
	return (*head);
}
