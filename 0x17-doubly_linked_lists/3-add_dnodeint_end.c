#include "lists.h"
/**
* add_dnodeint_end - adds a new_node node at the end of a dlistint_t list.
 * @head: input variable with list.
 * @n: input variable with node data.
 *
 * Return: the address of the new_node element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *back = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (head)
	{
		(*new_node).n = n;
		(*new_node).next = NULL;
		if (!*head)
		{
			*head = new_node;
			return (*head);
		}
		while (back && (*back).next)
			back = (*back).next;
		(*back).next = new_node;
		(*new_node).prev = back;
	}
	else
		return (NULL);
	return (new_node);
}
