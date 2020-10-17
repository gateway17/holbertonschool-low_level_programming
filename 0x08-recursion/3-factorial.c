<<<<<<< HEAD
#include <stdio.h>


int factorial(int n)
{
	int result;
	int
	int  
/*	printf("El valor de n ahora es: %d\n",result);
*/
	if (n >= 1)
	{
	result = factorial (n * (ctr - 1));
	}
	ctr--;
	printf("El valor de n ahora es: %d\n",result);

		return(result);
}

int main(void)
{
    int r;

    r = factorial(5);
    printf("%d\n", r);
	return(0);
=======
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
>>>>>>> 5ee9577395dfdd212a544fb48fd3f92225514a5e
}
