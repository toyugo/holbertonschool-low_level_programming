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

	ptr = *head;
	ptrm = *head;
	ptrp = *head;
	ptr = ptr->next;
	if (ptrp->next->next != NULL)
	{
		ptrp = ptrp->next;
		ptrp = ptrp->next;
	}
/*	printf("ptrm = %i ptr = %i ptrp = %i\n",ptrm->n, ptr->n, ptrp->n);*/
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
	free(ptrm);
	return (1);
}
