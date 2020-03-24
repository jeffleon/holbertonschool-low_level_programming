#include "lists.h"
/**
 * print_listint - singly linked list
 * @h: string - (malloc'ed string)
 *
 * Return: a number
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *copia = h;
	size_t count = 0;

	if (copia == NULL)
		return (0);
	while (copia)
	{
		printf("%d\n", copia->n);
		count++;
		copia = copia->next;
	}
	return (count);
}
