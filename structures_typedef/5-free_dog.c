#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - will free dogs
 *
 * @d: dog being freed
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
