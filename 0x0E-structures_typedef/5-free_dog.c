#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Freems dogs
 * @d: The dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
