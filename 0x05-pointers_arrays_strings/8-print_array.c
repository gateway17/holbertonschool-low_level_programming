#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints integer with a limit.
 *@a:the array
 *@n:limit.
 */
void print_array(int *a, int n)
{
	int ctr;

	for (ctr = 0; ctr < ni ; ctr++)
	{
		if (ctr == n - 1)
		{
			printf("%d", a[ctr]);
			continue;
		}
		printf("%d, ", a[ctr]);

	}
	printf("\n");
}
