#include "holberton.h"

/**
 * rot13 - encodes a string in rot13
 * @s: String to encode
 * Return: Pointer to encoded string.
 */
char *rot13(char *s)
{
	char alpha_a_Z[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n_M[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int ctr, ctr2;

	for (ctr = 0; *(s + ctr); ctr++)
	{
		for (ctr2 = 0; ctr2 < 52; ctr2++)
		{
			if (alpha_a_Z[ctr2] == *(s + ctr))
			{
				*(s + ctr) = n_M[ctr2];
				break;
			}
		}
	}
	return (s);
}
