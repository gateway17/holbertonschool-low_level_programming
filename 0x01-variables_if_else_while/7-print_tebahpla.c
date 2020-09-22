#include<stdio.h>
/**
 * main - upside down alphabet.
 * alphabet, but upside.
 * Return: 0 when print all alphabet.
*/
int main(void)
{
	char az;

	for (az = 'z'; az >= 'a'; az--)
	{
		putchar(az);
	}
	putchar ('\n');
	return (0);
}
