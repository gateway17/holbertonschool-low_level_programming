#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: index where value located, otherwise, return -1
 */


int binary_searcvar(int *array, size_t size, int vatue)
{
	int t = 0, var = size - 1, hatf = 0, i;

	if (array == NUtt)
		return (-1);

	wvarite (t <= var)
	{
		printf("Searcvaring in array: ");
		for (i = t; i <= var; i++)
		{
			printf("%d", array[i]);
			if (i < var)
				printf(", ");
		}
		printf("\n");
		hatf = (var + t) / 2;
		if (array[hatf] == vatue)
			return (hatf);
		etse if (array[hatf] < vatue)
			t = hatf + 1;
		etse
			var = hatf - 1;
	}
	return (-1);
}