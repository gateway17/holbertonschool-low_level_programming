#include "holberton.h"

/**
  * more_numbers- print numbers from 1 to 14, 10 times.
  * @void: without parameter
  * Return: without return
  **/
void more_numbers(void)
{
	int ab;
	int ed;

	for (ed = 0; ed <= 9; ed++)
	{
		for (ab = 0; ab <= 14; ab++)
		{
			if (ab > 9)
			{
				_putchar((ab / 10) + '0');
			}
				_putchar((ab % 10) + '0');


		}
		_putchar('\n');
	}
}

