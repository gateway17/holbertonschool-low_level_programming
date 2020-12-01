#include "holberton.h"
/**
 * alloc_grid - make an array of pointer to integers.
 * @width: width of array of pointers.
 * @height: height of each array of integers.
 * Return: Double pointer to array of pointers.
 */

int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int ctr, ctr2, ctr3;

	if (width < 1 || height < 1)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
		if (array == NULL)
			return (NULL);

	for (ctr = 0; ctr < height; ctr++)
	{
		array[ctr] = (int *)malloc(sizeof(int) * width);
		if (array[ctr] == NULL)
		{
			for (ctr3 = 0; ctr3 < ctr; ctr3++)
			{
				free(array[ctr3]);
			}
			free(array);
			return (NULL);
		}

		for (ctr2 = 0; ctr2 < width; ctr2++)
		{
			array[ctr][ctr2] = 0;
		}
	}
	return (array);

}
