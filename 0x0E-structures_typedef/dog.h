#ifndef __DOG__
#define __DOG__

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - Dog's data.
 * @name: Pet's name.
 * @age: years old (pet's)
 * @owner: pet's owner.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;



void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
