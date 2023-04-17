#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The dog
 * @name: Name of the dog
 * @onwer: Name of the owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}