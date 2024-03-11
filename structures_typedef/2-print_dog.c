#include <stdio.h>
#include "dog.h"

/**
 * print_dog - will print a dog
 *
 * @d: given dog
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL || d->owner == NULL)
	{
		d->name = "(nil)\n";
		d->owner = "(nil)\n";
		return;
	}

	printf("NAME: %s\nAGE: %f\nOWNER: %s\n", d->name, d->age, d->owner);
}
