#include "dog.h"
/**
 * length - Gives legth of a string.
 * @a: String.
 * Return: Length of a string.
 */
int length(char *a)
{

	unsigned int i = 0;

	while (a[i])
	i++;
	return (i);
}

/**
 * CloneString - Clones a string.
 * @OS: String to copy.
 * @NS: Where to paste the copy.
 */
void CloneString(char *OS, char *NS)
{
	 unsigned int i = 0;

	while (OS[i])
	{
		NS[i] = OS[i];
		i++;
	}
	NS[i] = '\0';
}

/**
 * new_dog - Creates info of a new dog.
 * @name: Dog's name.
 * @age: Dog's age.
 * @owner: Dog's owner.
 * Return: Pointer to tha new dog's structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_pet;
	char *size_string;
	char *size_owner;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	/* Reserve space for new structure (new_pet). */
	new_pet = malloc(sizeof(dog_t));

	/* Dog's name */
	size_string = malloc(sizeof(char) * length(name) + 1);
	if (size_string == NULL)
	{
		free(new_pet);
		return (NULL);

	}

	CloneString(name, size_string);

	/* Owner's name. */
	size_owner = malloc(sizeof(char) * length(owner) + 1);
	if (size_string == NULL)
	{
		free(new_pet);
		free(size_string);
		return (NULL);

	}

	CloneString(owner, size_owner);

	/* Asigning values. */
	new_pet->name = size_string;
	new_pet->age = age;
	new_pet->owner = size_owner;
	return (new_pet);
}
