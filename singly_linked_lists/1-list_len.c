#include "lists.h"

/**
 * list_len - will return the number of elements in the list
 *
 * @h: head
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

