#include "holberton.h"
/**
 * print_sign - sign of a number (ASCCI)
 * print the sign (dipending in ASCCI table) by the number.
 *@n: sign's number.
 * Return: always 0.
 */
int print_sign(int n)
{
	if (n > '0')
	{
		_putchar ('+');
		return (1);
	}
	else if (n == '0')
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
return (0);
}
