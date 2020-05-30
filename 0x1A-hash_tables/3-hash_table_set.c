#include "hash_tables.h"
/**
 * hash_table_set - singly linked list
 * @ht: string - (malloc'ed string)
 * @key: num
 * @value: num
 * Return: a number
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned int idx = 0;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	while (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			if (ht->array[idx]->value == NULL)
				return (0);
			return (1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
