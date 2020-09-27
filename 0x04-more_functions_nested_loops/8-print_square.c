#include "holberton.h"
/**
 *print_square - loop for printing a square.
 *@size: the size of the squere.
 */
void print_square(int size)
{
	int counter1, counter2;

	for (counter1 = 0; counter1 < size; counter1++)
	{
		for (counter2 = 0; counter2 < size; counter2++)
		{
			_putchar(35);
		}
	_putchar ('\n');
	}
	if (size <= 0)
	{
		_putchar ('\n');
	}
}
