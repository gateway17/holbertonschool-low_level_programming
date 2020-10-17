#include <stdio.h>
#include "holberton.h"

void reverse_array(int *a, int n)
{
	int ctr2 = 0;
	int ctr1 = 0;

	while (a[ctr1] != '\0')
	{
		printf("%d\n", a[ctr1]);
		ctr1++;
	}

/*	while (ctr2 <= n)
	{
	a[ctr2] = a[ctr1];
	
	ctr2++;
	ctr1--;
	} */

}


void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, 12);
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
	}
