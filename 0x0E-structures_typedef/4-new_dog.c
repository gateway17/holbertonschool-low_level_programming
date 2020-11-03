#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: Dog's names.
 * @age: Dog's age.
 * @owner: Dog's owner.
 * Return: Pointer to the new structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *new_pet;

	new_pet->name = name;
	new_pet->age = age;
	new_pet->owner = owner;

	return (new_pet);

}







