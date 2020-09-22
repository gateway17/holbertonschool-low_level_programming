#include<stdio.h>
/**
 * main - alphabet skip e and q
 * print alphabet without e and q
 * Return: if everything got right,exit with 0.
 */
int main(void)
{
	char az;

	az = 'a';
	while (az <= 'z')
	{
		if (az == 'e' || az == 'q')
		{
		az++;
		}
	putchar (az);
	az++;
	}
	putchar ('\n');
	return (0);
}
