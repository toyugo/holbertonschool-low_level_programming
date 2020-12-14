#include "lists.h"
/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * @h: head
 * @idx: index
 * @n: n
 * Return: sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *ptr;
	dlistint_t *ptrm;
	unsigned int cp = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	ptrm = *h;
	ptr = *h;
	ptr = ptr->next;
	while (cp != idx)
	{
		ptr = ptr->next;
		ptrm = ptrm->next;
		cp++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = ptrm;
	new->next = ptr;
	ptrm->next = new;
	ptr->prev = new;
	return (new);
}
