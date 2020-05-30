#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned int idx = 0;

	idx = key_index((const unsigned char *)key,(unsigned long int)ht->size);
	while(ht->array[idx] != NULL)
	{
		if(strcmp(ht->array[idx]->key,key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			if (ht->array[idx]->value == NULL)
				return(0);
			return(1);
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return 1;
}
