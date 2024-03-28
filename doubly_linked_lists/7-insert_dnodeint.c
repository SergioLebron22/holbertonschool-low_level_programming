#include "lists.h"

/**
 * 
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp = *h;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));
        
	new = malloc(sizeof(dlistint_t));

	for (i = 0; i < idx - 1; i++)
	{
		if (new == NULL)
			return (NULL);
		temp = temp->next;
    }

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));


	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	return (new);
}
