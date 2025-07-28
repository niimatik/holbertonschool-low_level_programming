#include "lists.h"

/**
 * add_node_end - add a node at the end of the list
 * @head: the list to add the node
 * @str: the node to add
 *
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added, *new_tail;

	new_tail = malloc(sizeof(list_t));
	if (new_tail == NULL)
		return (NULL);

	new_tail->str = strdup(str);
	new_tail->len = _strlen(str);
	new_tail->next = NULL;

	if (*head == NULL)
	{
		*head = new_tail;
		return (*head);
	}
	else
	{
		added = *head;
		while (added->next)
		{
			added = added->next;
		}
		added->next = new_tail;
		return (added);
	}
	return (0);
}

/**
 * _strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */

int _strlen(const char *s)
{
	int a = 0;

	while (s[a])
	{
		a++;
	}
	return (a);
}
