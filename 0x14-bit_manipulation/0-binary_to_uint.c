#include "holberton.h"

/**
 * binary_to_uint - convert a binary to an unsigned int.
 * @b:binary number.
 * Return: The decimal number or, 0 if b is not a binary.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rst, tm;
	int a;

	if (b == NULL)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (tm = 1, rst = 0, a--; a >= 0; a--, tm *= 2)
	{
		if (b[a] == '1')
			rst += tm;
	}

	return (rst);
}
