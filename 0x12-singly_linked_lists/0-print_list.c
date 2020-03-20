#include "list.h"

size_t print_list(const list_t *h)
{
	const list_t *copia;
	unsigned int i = 0;

	copia = h;
	if (copia == NULL)
		printf("[0] (nil)");
	while(copia != NULL)
	{
		printf("[%ui] %s\n", copia->len, copia->str);
		copia = copia->next;
		i++;
	}
	return(i);
}
