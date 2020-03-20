#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *copia;
	size_t i = 0;

	copia = h;
	if (!copia->str)
		printf("[0] (nil)");
	while(copia != NULL)
	{
		printf("[%d] %s\n", copia->len, copia->str);
		copia = copia->next;
		i++;
	}
	return(i);
}
