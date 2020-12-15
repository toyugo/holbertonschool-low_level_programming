#include "lists.h"
/**
 * delete_dnodeint_at_index - delete_dnodeint_at_index
 * @head: head
 * @index: index
 * Return: sum
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *ptrm;
	dlistint_t *ptrp;
	unsigned int cp = 1;

	ptrm = *head;
	if (ptrm->next == NULL || ptrm == NULL)
		return (-1);
	ptr = *head;
	ptrp = *head;
	if (ptr->next != NULL)
	{
		ptrp = ptrp->next;
		ptr = ptr->next;
	}
	if (ptrp->next != NULL)
		ptrp = ptrp->next;
	if (index == 0)
	{
		*head = ptr;
		free(ptrm);
		return (1);
	}
	while (cp < index)
	{
		ptr = ptr->next;
		ptrm = ptrm->next;
		ptrp = ptrp->next;
		cp++;
	}
	ptrm->next = ptrp;
	ptrp->prev = ptrm;
	if (ptr != NULL)
		free(ptr);
	return (1);
}
