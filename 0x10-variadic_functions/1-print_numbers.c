#include "variadic_functions.h"
/**
 * print_numbers - prints a sequence of integers.
 * @separator: text betweeb numbers.
 * @n: List of integers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int ctr;

	va_list(list);
	va_start(list, n);


	for (ctr = 0; ctr < n - 1 ; ctr++)
	{
	if (separator == NULL)
	{
		printf("%d", va_arg(list, unsigned int));
	}
	else
	{
	printf("%d%s", va_arg(list, unsigned int), separator);
	}
	}
	printf("%d\n", va_arg(list, unsigned int));
	va_end(list);
}
