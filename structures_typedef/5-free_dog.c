#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_dog - clear dog
 * @d: dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
