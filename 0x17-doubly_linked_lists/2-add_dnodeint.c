#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: head reference.
 * @n: node int data.
 * Return: pointer to the new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (*head)
		(*(*head)).prev = new_node;
	(*new_node).n = n;
	(*new_node).next = *head;
	(*new_node).prev = NULL;
	*head = new_node;
	return (new_node);
}
