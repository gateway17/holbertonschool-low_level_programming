#include <stdio.h>

/**
 * array_iterator - iterants each position of a array
 * and calls another function.
 *@array: The array.
 *@size: The mount of positions we are going to print.
 *@action: The function we are calling.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int counter;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (counter = 0; size > 0; counter++, --size)
	{
		action(array[counter]);

	}
}
