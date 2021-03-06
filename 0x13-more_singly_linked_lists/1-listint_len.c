#include "lists.h"
/**
 * listint_len - singly linked list
 * @h: string - (malloc'ed string)
 *
 * Return: a number
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *copia = h;
	size_t count = 0;

	if (copia == NULL)
		return (0);
	while (copia)
	{
		copia = copia->next;
		count++;
	}
	return (count);
}
