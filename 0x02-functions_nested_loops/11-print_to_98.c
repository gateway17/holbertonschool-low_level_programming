#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - print the natural numbers to 98.
 *@n:number witch is going to start printing.
*/

void print_to_98(int n)
{

	while (n > 97)
	{
		printf("%d", n);
		n--;
		if (n >= 98)
		{
			putchar(44);
			putchar(32);
		}
		else
		{
			putchar(10);
			return;
		}
	}

	for (; n < 99; n++)
	{
		printf("%d", n);

		if (n < 98)
		{
			putchar(44);
			putchar(32);
		}
		else
			putchar(10);
	}
}
