#include "holberton.h"

void print_triangle(int size)
{
	int times;

	int spaces = 0;

	for (times = 0; times < size; times++)
	{
		for (spaces = size - 1; spaces < size; spaces++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
	if (n <= 0)	
	{
	_putchar('\n');
	}
}
