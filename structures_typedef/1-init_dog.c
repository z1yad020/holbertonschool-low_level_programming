#include "dog.h"

/**
 * init_dog - A dog is the only thing on earth that loves you more than
 * you love yourself
 * @d: dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
