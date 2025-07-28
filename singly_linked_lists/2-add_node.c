#include "lists.h"

/**
 * add_node - add a node at the beginning of a list
 * @head: the list to add the node
 * @str: the node to add
 *
 * Return: the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *added;

	if (head != NULL && str != NULL)
	{
		added = malloc(sizeof(list_t));
		if (added == NULL)
			return (NULL);

		added->str = strdup(str);
		added->len = _strlen(str);
		added->next = *head;

		*head = added;

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
