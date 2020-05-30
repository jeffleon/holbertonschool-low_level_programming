#include "hash_tables.h"
/**
 * hash_table_get - singly linked list
 * @ht: string - (malloc'ed string)
 * @key: key
 * Return: a number
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int i = 0;
	hash_node_t *copy = NULL;

	for (i = 0; i < ht->size; i++)
	{
		copy = ht->array[i];
		for (; copy; copy = copy->next)
		{
			if (strcmp(copy->key, key) == 0)
				return (copy->value);
		}
	}
	return (NULL);
}
