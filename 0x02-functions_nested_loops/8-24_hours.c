#include "holberton.h"
/**
 *jack_bauer -  prints Jack bauer's clock
 */
void jack_bauer(void)
{
	int hr1, hr2, min1, min2;

	for (hr1 = 0; hr1 <= 2; hr1++)
	{

		for (hr2 = 0; hr2 <= 9; hr2++)
		{

			for (min1 = 0; min1 <= 5; min1++)
			{

				for (min2 = 0; min2 <= 9; min2++)
				{

					_putchar(hr1 + '0');
					_putchar(hr2 + '0');
					_putchar(58);
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');

					if (hr1 == 2 && hr2 == 3 && min1 == 5 && min2 == 9)
						return;

				}


			}


		}

	}

}
