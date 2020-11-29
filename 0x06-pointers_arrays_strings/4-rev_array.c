#include <stdio.h>
#include "holberton.h"
/**
 *reverse_array - Reverse de values of an array.
 *@a: Array.
 *@n: number of elements of the array.
 */
void reverse_array(int *a, int n)
{

	int ctr2 = 0;
	int b = 0;
	int ctr1 = --n;

	for (; ctr1 >= ctr2; ctr1--)
	{
	ctr2 = n - ctr1;
	b = a[ctr2];
	a[ctr2] = a[ctr1];
	a[ctr1] = b;
	}

}
