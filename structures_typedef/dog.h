#ifndef __FILE_NAME__
#define __FILE_NAME__
/**
 * struct dog - Poppy
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Poppy
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
