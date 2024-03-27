#include "lists.h"

/**
 * free_dlistint - will free a list
 *
 * @head: start of list
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	dlistint_t *next_node;

	if (head != NULL)
	{
		node = head;
		next_node = head->next;

		while (next_node != NULL)
		{
			free(node);
			node = next_node;
			next_node = next_node->next;
		}
		free(node);
	}
}
