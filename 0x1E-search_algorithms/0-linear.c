#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: The array to search on
 * @size: Size of the array
 * @value: Value to look for
 * Return: Index where "value" is located
*/
int linear_search(int *array, size_t size, int value)

{
	if (array == NULL)
	{
	return (-1);
	}
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			continue;
		}
	}
	return (-1);
}
