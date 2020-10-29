#include "dog.h"
/**
 * init_dog - Initialize a variable of type "struct dof".
 * @d: Pointer to a variable of type "struct dog".
 * @name: Pet's name.
 * @age: Pet's age.
 * @owner: Pet's owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;

}
