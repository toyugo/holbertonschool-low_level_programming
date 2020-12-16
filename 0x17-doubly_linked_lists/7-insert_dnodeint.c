#include "lists.h"
/**
 * get_max_node - get_max_node
 * @h: pointer to head of list
 * Return: number of nodes
 */

int get_max_node(dlistint_t **h)
{
	dlistint_t *ptr = *h;
	unsigned int i = 0;

	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
/**
 * goToIndex - goToIndex
 * @h: pointer to head of list
 * @idx: pointer to head of list
 * Return: number of nodes
 */
dlistint_t *goToIndex(dlistint_t **h, unsigned int idx)
{
	dlistint_t *ptr;
	unsigned int cp = 0;

	ptr = *h;
	while (cp < idx)
	{
		ptr = ptr->next;
		cp++;
	}
	return (ptr);
}

/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * @h: head
 * @idx: index
 * @n: n
 * Return: sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *ptrM;
	unsigned int indexmax;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *h;
	indexmax = get_max_node(h);
	printf("idx = %i indexmax = %i\n", idx, indexmax);
	if (idx > indexmax)
		return (NULL);
	if (idx == indexmax)
	{
		ptr = goToIndex(h, idx);
		ptrM = goToIndex(h, idx - 1);
		ptrM->next = new;
		new->prev = ptr;
		new->next = NULL;
	}
	else if (idx == 0)
	{
		ptr = goToIndex(h, idx);
		*h = new;
		new->prev = NULL;
		new->next = ptr;
	}
	else
	{
		ptr = goToIndex(h, idx);
		ptrM = goToIndex(h, idx - 1);
		ptrM->next = new;
		new->next = ptr;
		new->prev = ptrM;
		ptr->prev = new;
	}
	return (new);
}
