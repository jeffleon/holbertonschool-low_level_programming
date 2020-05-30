#include "hash_tables.h"
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *copy = NULL;
	char *token = "";

	printf("{");
	for(i = 0; i < ht->size; i++)
	{
		copy = ht->array[i];
		for(;copy;copy=copy->next)
		{
			printf("%s'%s': '%s'", token, copy->key, copy->value);
			token = ", ";
		}
	}
	printf("}\n");
}
