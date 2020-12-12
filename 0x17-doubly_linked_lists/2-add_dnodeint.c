#include "lists.h"
/**
 * add_dnodeint - add_dnodeint
 * @head: head
 * @n: integer
 * Return: number of node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *new;
	int i;

	i = 0;
	new = malloc(sizeof(dlistint_t));
	ptr = *head;
	if (ptr->next != NULL)
	{
		ptr->next->prev = new;
	}
	ptr = new;
	new->prev = *head;
	return (new);
}
