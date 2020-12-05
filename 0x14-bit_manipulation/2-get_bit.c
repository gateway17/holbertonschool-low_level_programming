#include "holberton.h"
/**
 *get_bit - become integer to binary and check what is in a position.
 *@n: Number to become to an integer.
 *@index:Position to check in the array.
 *Return: what is in given position.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
