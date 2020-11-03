#include "dog.h"

/**
 * free_dog - liberates memory for the structure dog
 * @d: pointer to dog
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	free(d->name);
	free(d->owner);
	free(d);


}
