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

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("NAME: %s\n", d->name);
	printf("AGE: %f\n", d->age);
	printf("OWNER: %s\n", d->owner);
}
