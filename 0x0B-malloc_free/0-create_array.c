#include "holberton.h"
#include <stdlib.h>
/**
 *create_array - Creates an array.
 *@size:reserve size in memory for the array.
 *@c:First character for the array.
 *Return: Return the pointer of the array.
 */
char *create_array(unsigned int size, char c)
{

	char *array;

	if (size == 0)
	{
		return (NULL);

	}
	array = malloc(size);
	array[0] = c;
	return (array);
	free(array);
}
