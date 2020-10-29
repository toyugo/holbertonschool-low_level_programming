#include "lists.h"

/**
 * add_node_end - add_node_end
 * @head: head
 * @str: str
 * Return: adresse of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *tmp;
	int i = 0;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	tmp = strdup(str);
	if (str == NULL || new == NULL)
		return (NULL);
	for (i = 0; tmp[i] ; i++)
	;
	len = i;
	new->next = NULL;
	new->str = tmp;
	new->len = len;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while ((*head)->next != NULL)
		{
			(*head) = (*head)->next;
			i++;
		}
		(*head)->next = new;
	}
	return (new);
}
