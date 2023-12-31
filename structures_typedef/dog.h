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
typedef struct dog
{
	float age;
	char *name;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
