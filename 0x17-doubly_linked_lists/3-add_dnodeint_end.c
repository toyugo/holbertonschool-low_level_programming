#include "lists.h"
/**
 * add_dnodeint_end - add_dnodeint_end
 * @head: head
 * @n: integer
 * Return: number of node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;
	
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;
	else
	{
		ptr = *head;
		new->n = n;
		new->next = NULL;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
		new->prev = ptr;
	}
	return (new);
}
