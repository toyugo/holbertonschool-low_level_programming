#include "lists.h"

/**
 * add_node - add_node
 * @str: str
 * @head: head
 * Return: Number of node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *tps;
	int i = 0;
	list_t *new;

	tps = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; tps[i]; i++)
	;
	new->str = tps;
	new->len = i;
	new->next = *head;
	*head = new;
	return (new);
}
