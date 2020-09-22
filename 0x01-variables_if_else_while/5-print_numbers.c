#include<stdio.h>

/**
 * main - Decimal numbers
 * Print all decimals numbers
 * Return: 0 if everything goes as planned
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num = num + 1)
	{
		printf("%d", num);
	}
	putchar ('\n');
	return (0);
}
