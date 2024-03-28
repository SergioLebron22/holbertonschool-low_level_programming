#include "lists.h"

/**
 * sum_dlistint - will sum all integer values in the list
 *
 * @head: start of list
 *
 * Return: total of sum
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
