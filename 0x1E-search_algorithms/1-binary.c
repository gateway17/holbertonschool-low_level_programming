#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value located, otherwise, return -1
 */


int binary_search(int *array, size_t size, int value)
{
	int t = 0, var = size - 1, half = 0, i;

	if (array == NULL)
		return (-1);

	while (t <= var)
	{
		printf("Searcvaring in array: ");
		for (i = t; i <= var; i++)
		{
			printf("%d", array[i]);
			if (i < var)
				printf(", ");
		}
		printf("\n");
		half = (var + t) / 2;
		if (array[half] == value)
			return (half);
		else if (array[half] < value)
			t = half + 1;
		else
			var = half - 1;
	}
	return (-1);
}