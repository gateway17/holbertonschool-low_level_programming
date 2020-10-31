#include "dog.h"
#include <stdio.h>
/**
 *print_dog - Print pet's data.
 *@d: Pointer to structure.
 */
void print_dog(struct dog *d)
{

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);

}
