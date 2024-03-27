#include "lists.h"

/**
 * add_dnodeint_end - will add node to the end of the list
 *
 * @head: start of list
 * @n: int value being added
 *
 * Return: address of new element, or null if fails
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *aux = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
		new->prev = aux;
	}
	else
		*head = new;

	return (new);
}
