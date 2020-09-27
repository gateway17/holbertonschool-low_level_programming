#include <stdio.h>
/**
 * main - Fizz Buzz.
 * print Fizz if the number is muntiple of 3, Buzz if multiple of 5.
 * Return: Always 0.
 */
int main(void)
{
	int num1;

	for (num1 = 1; num1 <= 100; num1++)
	{
		if (num1 % 3 == 0 && num1 % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if (num1 % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (num1 % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", num1);
	}
	putchar ('\n');
return (0);
}
