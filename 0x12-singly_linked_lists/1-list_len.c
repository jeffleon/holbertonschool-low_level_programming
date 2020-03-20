#include "lists.h"
/**
 * list_len - singly linked list
 * @h: string - (malloc'ed string)
 *
 * Return: a number
 */
size_t list_len(const list_t *h)
{
	const list_t *copia;
	unsigned int i = 0;

	copia = h
	while (copia)
	{
		i++;
		copia = copia->next;
	}
	return (i);

}
