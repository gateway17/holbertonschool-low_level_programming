#include "lists.h"

/**
 * dlistint_len - number of element in a linked list.
 * @h: Linked list.
 * Return: value with
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ctr = 0;

	for (h)
		h = h->next;
		ctr++;
	return (ctr);
}
