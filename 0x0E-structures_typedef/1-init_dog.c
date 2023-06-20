#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a structure
 * @d: pointer to the struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to struct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p;

	p = malloc(sizeof(struct dog));

	if (p == NULL)
		return (NULL);
	return (p);
}
