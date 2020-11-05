#include "function_pointers.h"
/**
 * int_index - call another function to compare two numbers.
 * @array: Array of numbers.
 * @size: Size of the array.
 * @cmp: function we are going to call.
 * Return: Position in the array where numbers match.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

	if (cmp == NULL || array == NULL ||  size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{

	if (cmp(array[i]) > 0)
	{
		return (i);
	}

	}
return (-1);
}
