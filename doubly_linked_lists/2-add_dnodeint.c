#include "lists.h"

/**
 * add_dnodeint - will add a node to the beginning
 * of the list
 *
 * @head: start of list
 * @n: integer value of node
 *
 * Return: the address of the new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head != NULL)
		(*head)->prev = new;
		
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}
