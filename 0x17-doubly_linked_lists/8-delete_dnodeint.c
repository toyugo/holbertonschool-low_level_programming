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
	unsigned int cp = 0;

	ptr = *head;
	while (cp <= index)
	{	
		ptr = ptr->next;
		cp++;
	}
	if (*head == NULL || ptr == NULL)
		return (-1);
	if (ptr != NULL)
	{
		free(ptr);
		return (1);
	}
	return (1);
}
