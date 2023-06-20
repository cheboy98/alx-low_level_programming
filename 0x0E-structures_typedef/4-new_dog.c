#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create a new struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len, name_size, owner_size;
	dog_t *d;

	name_len = strlen(name);
	name_size = name_len + 1;

	owner_len = strlen(owner);
	owner_size = owner_len + 1;

	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * name_size);

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * owner_size);

	if (d->owner == NULL)
	{
		free(d->mane);
		free(d);
		return (NULL);
	}

	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);

	return (d);
}
