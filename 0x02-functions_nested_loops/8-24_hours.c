#include "holberton.h"

void jack_bauer(void)
{
	int num1, num2;

	for (num1 = 00; num1 <= 23;num1++)
	{
		for (num2 = 0;num2 <= 59;num2++)
		{
			_putchar(num1 + '0');
			_putchar(':');
			_putchar(num2 + '0');
		}
	
	}


}
