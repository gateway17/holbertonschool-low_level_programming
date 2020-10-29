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
	if (!(d == NULL))
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
