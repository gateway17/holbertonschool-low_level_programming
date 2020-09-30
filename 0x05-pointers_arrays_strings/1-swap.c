#include "holberton.h"
/**
 * swap_int - swap the value of between *a,*b
 *@a: first value swap.
 *@b: second values to swap.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
