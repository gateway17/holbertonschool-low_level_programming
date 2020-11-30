#include "holberton.h"
/**
 * leet - encodes a string into 1337.
 * @s: String to encode.
 * Return: Same string, but encoded.
 */

char *leet(char *s)
{
	int ctr, ctr2;
	char low_array[] = "aeotl";
	char upper_array[] = "AEOTL";
	int numbers_array[] = {'4', '3', '0', '7', '1'};

	for (ctr = 0; s[ctr] != '\0'; ctr++)
	{
		for (ctr2 = 0; low_array[ctr2] != '\0'; ctr2++)
			if (s[ctr] == low_array[ctr2] || s[ctr] == upper_array[ctr2])
			{
				s[ctr] = numbers_array[ctr2];
			}
	}
	return (s);
}
