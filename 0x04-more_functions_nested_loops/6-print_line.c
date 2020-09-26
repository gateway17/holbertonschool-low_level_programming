#include "holberton.h"
/**
 *print_line - print "_" character.
 *@n: times that "_" is going to be printed.
 *print n times the "_" character.
 */
void print_line(int n)
{
	int counter;

	for (counter = 0; counter <= n; counter++)
	{
		_putchar (95);
		if (n <= 0)
		{
			_putchar ('\n');
		}
	}
	_putchar ('\n');
}
