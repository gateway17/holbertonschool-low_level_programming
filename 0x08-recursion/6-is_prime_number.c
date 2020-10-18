#include "holberton.h"
/**
 *is_prime_number - calls to function.
 *@n: number top know if it's prime.
 *Return: "1" if it's prime, else "0".
 */
int function(int n, int dvr);

int is_prime_number(int n)
{

	if (n > 2)
	{
	return (function(n, 2));
	}
	else
	{
		return (0);
	}


}
/**
 *function - ¿prime or not?.
 *@n: number top know if it's prime.
 *@dvr: Hiterator.
 *Return: "1" if it's prime, else "0".
 */

int function(int n, int dvr)
{
	if (n == dvr)
	{
		return (1);
	}

	if (n % dvr == 0 && n != dvr)
		return (0);
	else
		return (function(n, ++dvr));

}
