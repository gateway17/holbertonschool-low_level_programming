#include "holberton.h"
#include <limits.h>

/**
 * malloc_checked - Reserves memory.
 * @b: Size of the pointer wished.
 * Return: empty pointer.
 */

void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);

}
