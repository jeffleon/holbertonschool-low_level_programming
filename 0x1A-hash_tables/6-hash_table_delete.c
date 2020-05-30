#include "hash_tables.h"
/**
 * hash_table_delete - singly linked list
 * @ht: string - (malloc'ed string)
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *libresoy = NULL;
	unsigned int i = 0;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			libresoy = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = libresoy;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
