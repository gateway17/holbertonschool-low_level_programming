#include <stdio.h>
/**
 *jack_bauer -  prints Jack bauer's clock
 */
void jack_bauer(void)
{
	int hr1, hr2, min1, min2;


	for (hr1 = 48; hr1 < 51; hr1++)
	{
		for (hr2 = 48; hr2 < 58 ; hr2++)
		{

			for (min1 = 48; min1 < 54; min1++)
			{

				for (min2 = 48; min2 < 58; min2++)
				{

					putchar (hr1);
				if (hr1 == 50 && hr2 == 52)
				{
					return;
				}
				putchar (hr2);
				putchar (':');
				putchar (min1);
				putchar (min2);
				putchar ('\n');
				}
			}
		}
	}
}
