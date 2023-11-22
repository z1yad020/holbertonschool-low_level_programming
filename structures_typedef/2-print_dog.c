#include "dog.h"

/**
 * print_dog - A dog will teach you unconditional love. If you can have that in
 * your life, things won't be too bad
 * @d: dog
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (!d)
		return (1);

	if (!(d->name) || !(d->age) || !(d->owner))
	{
		if (!(d->name))
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);

		if (!(d->age))
			printf("Age: (nil)");
		else
			printf("Age: %f\n", d->age);

		if (!(d->owner))
			printf("Owner: (nil)");
		else
			printf("Owner: %s\n", d->owner);

		return;
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
