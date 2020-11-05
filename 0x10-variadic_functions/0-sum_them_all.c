#include "variadic_functions.h"
/**
 * sum_them_all - Sum all integer parameters.
 * @n:parameters.
 * Return: Sum of all of them.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)

		return (0);

	va_list(list);
	va_start(list, n);
	unsigned int salida;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		salida += va_arg(list, unsigned int);
	}
	va_end(list);
	return (salida);
}
