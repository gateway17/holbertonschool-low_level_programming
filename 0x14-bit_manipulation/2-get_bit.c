#include "holberton.h"
/**
 *get_bit - become integer to binary and check what is in a position.
 *@n: Number to become to an integer.
 *@index:Position to check in the array.
 *Return: what is in given position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int buffer, ctr, ctr2, buffer2;
	char *p;

	for (buffer = n, ctr = 0; (buffer >>= 1) > 0; ctr++)
		;
	buffer2 = ctr;
	p = (char *)malloc(sizeof(char) * ctr);

	for (ctr2 = 0; ctr > 0; ctr2++, ctr--)
	if ((n >> ctr) & 1)
		p[ctr2] = '1';
	else
		p[ctr2] = '0';

	buffer2 = buffer2 - index;

	if (p[buffer2] == '1')
		return (1);
	else
		return (0);

}
