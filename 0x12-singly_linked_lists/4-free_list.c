#include "lists.h"

/**
 * add_node_end - add_node_end
 * @head: head
 * @str: str
 * Return: adresse of new element
 */
void free_list(list_t *head)
{
	list_t *tp;

	while (head != NULL)
	{
		tp = head;
		head = head->next;
		free(tp->str);
		free(tp);
	}
}
