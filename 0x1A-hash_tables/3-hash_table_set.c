#include "hash_tables.h"
/**
 * hash_table_set - hash_table_set
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	/*Get index*/
	index = key_index((const unsigned char *)key, ht->size);
	printf("index vault: %lu\n", index);
	/*Add AddNewNodeAtFirst*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	ht->array[index] = new_node;
	new_node->next = ht->array[index];
	/*printf("%s\n", ht->array[index]->value);*/
	return (1);
}