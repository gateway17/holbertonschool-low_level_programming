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
		if (n <= 0)
		{
			_putchar ('\n');
			continue;
		}
	_putchar(95);
	}
	_putchar ('\n');
}
