#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog
 *
 * @name: name if dog
 * @owner: owner of dog
 * @age: age of dog
 *
 * Description: this is a dog
 */

typedef struct dog
{
char *name;
char *owner;
float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
