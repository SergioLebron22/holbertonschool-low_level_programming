#include "lists.h"

/**
 * get_dnodeint_at_index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i;
    dlistint_t *node;

    i = 0;
    node = head;
    while (i < index)
    {
        node = node->next;
        i++;
    }

    return (node);
}