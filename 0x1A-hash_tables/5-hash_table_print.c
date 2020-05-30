#include "hash_tables.h"
/**
 * hash_table_print - singly linked list
 * @ht: string - (malloc'ed string)
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *copy = NULL;
	char *token = "";

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		copy = ht->array[i];
		for (; copy; copy = copy->next)
		{
			printf("%s'%s': '%s'", token, copy->key, copy->value);
			token = ", ";
		}
	}
	printf("}\n");
}
