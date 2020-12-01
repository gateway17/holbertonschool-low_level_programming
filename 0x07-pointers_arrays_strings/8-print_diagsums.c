#include "holberton.h"
/**
 * print_diagsums - Print diagonal sum of integers.
 * @a: Array with the values.
 * @size: Size of array.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, add = 0, add2 = 0, j = size - 1;

	while (i < size)
	{
		add += a[i];
		add2 += a[i + j];
		i++;
		j -= 2;
		a += size;
	}
	printf("%d, ", add);
	printf("%d\n", add2);
}
