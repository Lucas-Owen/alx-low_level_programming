#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * Creates a new dog
 * @name: Name of the dog
 * @age: Age
 * @owner: The owner
 * Return: Pointer to a dog_t allocated by malloc or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof dog);
	if (!d)
		return (NULL);
	d->name = strdup(name);
	d->age = age;
	d->owner = strdup(owner);
	return (d);
}