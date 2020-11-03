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
	free(d);



}
/**
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Django", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}
*/
