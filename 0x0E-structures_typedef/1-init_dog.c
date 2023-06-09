#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: The dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Name of the owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
