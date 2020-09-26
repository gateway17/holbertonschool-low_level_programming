#include"holberton.h"
/**
 *
 *
 *
 */
void more_numbers(void)
{
	int times;
	char num;

	for(times = 0; times <= 9; times++)
	{
		for (num = '0'; num >= '0' && num <= 14; num++)
		{
			_putchar(num);
		}
	_putchar('\n');
	}
}
