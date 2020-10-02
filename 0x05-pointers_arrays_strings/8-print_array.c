#include "holberton.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int ctr;
	for (ctr = 0;ctr < n; ctr++)
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
