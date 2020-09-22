#include<stdio.h>
/**
 * main - Alphabet
 * print the alphabet.
 * Return: return 0 if code exit successfully
 */
int main(void)
{
	char ab, xz, AB, XZ;

	ab = 'a';
	xz = 'z';
	AB = 'A';
	XZ = 'Z';
	while (ab <= xz)
	{
	putchar(ab);
	ab = ab + 1;
	}
	while (AB <= XZ)
	{
	putchar(AB);
		if (AB == XZ)
		{
		putchar('\n');
		}
		AB = AB + 1;
		}
	return (0);
}
