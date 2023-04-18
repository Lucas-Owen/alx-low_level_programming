#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age
 * @owner: The owner
 * Return: Pointer to a dog_t allocated by malloc or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);
	if (name != NULL)
	{
		d->name = strdup(name);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
	}
	else
		d->name = NULL;
	d->age = age;
	if (owner != NULL)
	{
		d->owner = strdup(owner);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
	}
	else
		d->owner = NULL;
	return (d);
}
