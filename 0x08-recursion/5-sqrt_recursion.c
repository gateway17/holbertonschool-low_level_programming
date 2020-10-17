#include <stdio.h>
/**
 *_sqrt_recursion - calls function
 *@n: Number to get the squere root
 *Return: The root of that number.
 */
int _sqrt_recursion(int n)
{

	return (function(n, 0));
}

/**
 *function - squere root if a number
 *@n: Number to get the squere root
 *@num1: Multiplier.
 *Return: The root of that number.
 */


int function(int n, int num1)
{

	if (n < 0)
	{
		return (-1);

	}
	if (num1 * num1 == n)
	{
		return (num1);

	}
	else if (num1 * num1 < n)
	{
		return (function(n, num1 + 1));
	}
	else
	{
		return (-1);
	}
}
