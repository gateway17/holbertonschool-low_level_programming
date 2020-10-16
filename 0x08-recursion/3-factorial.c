#include "holberton.h"
/**
 *factorial - factorial of a number.
 *@n:The integer.
 *Return:The factorial of the integer.
 */

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
