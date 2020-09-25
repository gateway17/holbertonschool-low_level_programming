#include "holberton.h"
/**
 * _isdigit - digits or not.
 * @c: valiable for the digit.
 * Return: 1 if it is digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
