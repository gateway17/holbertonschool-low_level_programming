#include "lists.h"

/**
 * print_dlistint - funciton that print.
 * @h: linked list.
 *
 * Return: return value with index.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ctr = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		ctr++;
	}
	return (i);
}
