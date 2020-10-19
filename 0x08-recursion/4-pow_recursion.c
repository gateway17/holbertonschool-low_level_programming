#include <stdio.h>
/**
 *_pow_recursion - power of "y" in "x"
 *@x:Base
 *@y:Exponent
 *Return:total equation.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
