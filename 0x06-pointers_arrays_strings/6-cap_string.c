#include <stdio.h>
/**
 *cap_string - capitalizes all words of a string.
 *@s: Pointer of the string.
 *Return: pointer of the string (s).
 */
char *cap_string(char *s)
{
	int ctr, ctr2;
	char array[] = " \t\n,;.!?\"(){}";

	for (ctr = 0; s[ctr] != '\0'; ctr++)
	{
		for (ctr2 = 0; array[ctr2] != '\0'; ctr2++)
		{
			if (s[ctr] == array[ctr2] && s[ctr + 1] > 96 && s[ctr + 1] < 123)
			{
				s[ctr + 1] = s[ctr + 1] - 32;
			}
		}


	}
return (s);
}
