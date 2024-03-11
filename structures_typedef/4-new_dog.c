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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(dog);
		free(owner);
		return (NULL);
	}
	if (owner == NULL)
	{
		free(dog);
		free(name);
		return (NULL);
	}
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}


