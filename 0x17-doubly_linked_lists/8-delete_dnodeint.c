#include "lists.h"
/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * @h: head
 * @idx: index
 * @n: n
 * Return: sum
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *ptrm;
	unsigned int cp = 1;

	ptr = *head;
	ptrm = *head;
	ptr = ptr->next;
	while (cp < index)
	{
		ptr = ptr->next;
		ptrm = ptrm->next;
		cp++;
	}
	ptrm->next = ptr->next;
	ptr->next->prev = ptrm;
	if (ptr != NULL)
		free(ptr);
	return (1);
}
