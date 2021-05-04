#include "holberton.h"
/**
 * print_alphabet_x10 - Alphabet x 10.
 * print alphabet 10 times.
 * Not return
*/

void print_alphabet_x10(void)
{
	int time;

	char car = 'a';

	for (time = 0; car <= 'z' && time < 10; car++)
	{
	_putchar(car);
		if (car == 'z')
		{
		_putchar('\n');
		time++;
		car = '`';
		}
	}
}
