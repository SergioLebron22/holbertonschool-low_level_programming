#include "lists.h"

/**
 * dlistint_len - will count the number of elements in the list
 *
 * @h: head
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
