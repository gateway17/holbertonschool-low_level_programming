#include "holberton.h"
/**
 * print_binary - Becomes integer to binary.
 * @n: Integer.
 */
void print_binary(unsigned long int n)
{
	unsigned long int buffer;
	int tms;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (buffer = n, tms = 0; (buffer >>= 1) > 0; tms++)
		;

	for (; tms >= 0; tms--)
	{
		if ((n >> tms) & 1)
			printf("1");
		else
			printf("0");
	}
}