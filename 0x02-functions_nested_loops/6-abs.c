#include"holberton.h"
/**
 *_abs - value of a integer.
 *Computes the absolute value of an integer.
 *@a: integer that you enter.
 *Return: 0 always.
 */

int _abs(int a)
{

	if (a > 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
return (0);
}
