#include "lists.h"

/**
 * free_list - frees a list
 *
 * @head: start of list
 */

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (head != NULL)
	{
		node = head;
		next_node = head->next;
		while (next_node != NULL)
		{
			free(node->str);
			free(node);
			node = next_node;
			next_node = next_node->next;
		}
		free(node->str);
		free(node);
	}
}
