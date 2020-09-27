#include "holberton.h"
/**
 * print_diagonal - print diagonal
 *@n:how long is the line going to be.
 * print a line diagonal
 */
void print_diagonal(int n)
{
	int times;

	int spaces = 0;

	for (times = 0; times < n; times++)
	{
		for (spaces = 0; spaces < times; spaces++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
	_putchar ('\n');

}
