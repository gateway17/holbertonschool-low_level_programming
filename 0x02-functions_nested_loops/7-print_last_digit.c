#include "holberton.h"
/**
 * print_last_digit -  prints the last digit of a number.
 * @a: the number recived.
 * Return: the last digit.
 */

int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
	{
		a = a * -1;
		_putchar(a + '0');
	}
	else
		_putchar(a + '0');

	return (a);
}
