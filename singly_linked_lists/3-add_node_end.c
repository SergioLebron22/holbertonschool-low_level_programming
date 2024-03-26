#include "lists.h"

int _strlenRecursive(char *str);

/**
 * add_node_end - will add a new node to the end of the list
 *
 * @head: start of list
 * @str: string being added
 *
 * Return: address of the new element, or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux = *head;

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
	new->next = NULL;
	
	if(aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
	else
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


