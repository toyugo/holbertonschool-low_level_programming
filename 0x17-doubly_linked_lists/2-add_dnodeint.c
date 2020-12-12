#include "lists.h"
/**
 * add_dnodeint - add_dnodeint
 * @head: head
 * @n: integer
 * Return: number of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->prev = NULL;
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
