#include "hash_tables.h"
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *one;

	one = malloc(sizeof(hash_table_t));
	if(one == NULL)
	{
		return(NULL);
	}
	one->size = size;
	one->array = calloc(sizeof(hash_node_t *),size);
	if(one->array == NULL)
	{
		free(one);
		return(NULL);
	}
	return(one);
}
