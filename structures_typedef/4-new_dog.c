#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - will return the len of a string
 *
 * @s: arg string being passed as a parameter
 *
 * Return: int the string length
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * *_strcpy - will copy the string pointed to by src to the
 * buffer pointed to by dest
 *
 * @dest: where the string is being copied
 *
 * @src: string being pointed to, to copy
 *
 * Return: to the pointer dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (counter >= 0)
	{
		*(dest + counter) = *(src + counter);
		if (*(src + counter) == 0)
			break;
		counter++;
	}
	return (dest);
}

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

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
		return (NULL);

	if (name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
		return (NULL);
	_strcpy(dog->name, name);

	dog->age = age;

	if (owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
		return (NULL);
	_strcpy(dog->owner, owner);

	return (dog);
}


