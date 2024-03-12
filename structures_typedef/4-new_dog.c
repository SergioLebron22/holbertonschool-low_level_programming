#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - will create a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: new dog, NULL if fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name2;
	char *owner2;
	int n, o, i, j;
	struct dog *d;

	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	for (n = 0; *(name + n) != '\0'; n++)
		;
	for (o = 0; *(owner + o) != '\0'; o++)
		;
	name2 = malloc(n + 1);
	if (name2 != NULL)
	{
		for (i = 0; i <= n; i++)
			*(name2 + i) = *(name + i);
	}
	else
	{
		free(d);
		return (NULL);
	}
	owner2 = malloc(o + 1);
	if (owner2 != NULL)
	{
		for (j = 0; j <= o; j++)
			*(owner2 + j) = *(owner + j);
	}
	else
	{
		free(name2);
		free(d);
		return (NULL);
	}
	d->name = name2;
	d->age = age;
	d->owner = owner2;
	return (d);
}


