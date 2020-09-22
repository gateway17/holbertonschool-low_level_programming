#include<stdio.h>

/**
 * main - Decimal numbers
 * Print all decimals numbers
 * Return: 0 if everything goes as planned
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' +  num);
	}
	putchar ('\n');
	return (0);
}

