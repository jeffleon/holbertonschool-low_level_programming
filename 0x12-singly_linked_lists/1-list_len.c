#include "lists.h"

size_t list_len(const list_t *h)
{
	const list_t *copia;
	unsigned int i = 0;

	for(i = 0; copia != NULL; i++)
	{
		i++;
		copia = copia->next;
	}
	return(i);

}
