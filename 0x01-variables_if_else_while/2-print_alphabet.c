#include<stdio.h>
/**
 * main - Alphabet
 * print the alphabet.
 * Return: return 0 if code exit successfully
 */
int main(void)
{
	char ab, xz;

	ab = 'a';
	xz = 'z';
	while (ab <= xz)
	{
		putchar(ab);
		if (ab == xz)
		{
		putchar('\n');
		}
	ab = ab + 1;
	}
	return (0);
}
