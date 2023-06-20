#ifndef DOG_H
#define DOG_H

/**
 * struct dog - define a structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Structure that stores the caracteristics of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
