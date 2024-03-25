#include "lists.h"

int _strlenRecursive(char *str);

/**
 * add_node - will add node to the beginning of a list
 *
 * @head: head of the list
 * @str: string to be added
 *
 * Return: the address of the new element, NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}

	new->len = _strlenRecursive(new->str);
	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlenRecursive - returns the length of a string
 * @str: string
 * Return: length of string
 */

int _strlenRecursive(char *str)
{
	if (*str == 0)
		return (0);
	else
		return (1 + _strlenRecursive(str + 1));
}
