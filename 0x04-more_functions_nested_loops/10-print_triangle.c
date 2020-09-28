#include "holberton.h"
<<<<<<< HEAD
/**
 *print_triangle - prints a triangle
 *@size: the size of the triangle
 */
void print_triangle(int size)
{
	int s;
	int t;
	int c;

	t = size;
	for (c = 0; c < size; c++)
	{
		for (s = 0; s < t - 1; s++)
		{
			_putchar(' ');
		}
		t = t - 1;
		for (; s < size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
=======

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
>>>>>>> 6d392e733774452adc23b28fff83e3684a67c4fd
	}
}
