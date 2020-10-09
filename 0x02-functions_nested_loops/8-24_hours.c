#include "holberton.h"
/**
 *jack_bauer - print the Jack Bauer clock.
 */
void jack_bauer(void)
{
	char min2, min1, hr1, hr2;



	for (hr1 = 48; hr1 < 51; hr1++)
	{

	for (hr2 = 48; hr2 < 52; hr2++)
	{

	for (min1 = 48; min1 < 54; min1++)
	{


	for (min2 = 48; min2 < 58; min2++)
	{
		_putchar(hr1);
		_putchar(hr2);
		_putchar(':');
		_putchar(min1);
		_putchar(min2);
		_putchar('\n');
	}
	}
	}
	}

}
