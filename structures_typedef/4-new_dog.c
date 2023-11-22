#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - A door is what a dog is perpetually on the wrong side of
 * @d: dog
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: new struct of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog = malloc(sizeof(dog_t));

	if (!ndog)
	{
		free(d);
		return (NULL);
	}

	ndog->name = malloc(strlen(name) + 1);
	ndog->owner = malloc(strlen(owner) + 1);

	if (!ndog->name || !ndog->owner)
	{
		free(ndog->name);
		free(ndog->owner);
		free(ndog);
		return (NULL);
	}

	strcpy (ndog->name, name);
	strcpy (ndog->owner, owner);
	ndog->age = age;

	return (ndog);
}
