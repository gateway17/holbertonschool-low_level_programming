#include "holberton.h"
#include <stdio.h>

void print_rev(char *s)
{
	int counter, ctr;

	counter = 0;
	for (ctr = 0; s[ctr] != '\0'; ctr++)
	{
		counter++;

	}
	while (&s[counter] != &s[0])
	{
	_putchar(s[counter]);
	counter--;
	}
	_putchar(s[0]);
	_putchar('\n');

}
