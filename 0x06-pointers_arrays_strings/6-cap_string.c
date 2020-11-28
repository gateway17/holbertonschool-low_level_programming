#include <stdio.h>
/**
 *cap_string - capitalizes all words of a string.
 *@s: Pointer of the string.
 *Return: pointer of the string (s).
 */
char *cap_string(char *s)
{
	int ctr;


	for (ctr = 0; s[ctr] != '\0'; ctr++)
	{
	if (s[ctr - 1] == 32)
	{
		if (s[ctr] > 96 && s[ctr] < 123)
		{
			s[ctr] = (s[ctr] - 32);

		}

	}
	}
return (s);
}
