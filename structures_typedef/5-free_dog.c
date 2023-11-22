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
	free(ndog->name);
	free(ndog->owner);
	free(ndog);
}
