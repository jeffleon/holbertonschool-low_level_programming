#include "lists.h"
/**
 * print_dlistint - singly linked list
 * @h: string - (malloc'ed string)
 * Return: this element
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *copy = h;
	size_t i = 0;

	if (copy == NULL)
		return (0);
	for (; copy; copy = copy->next, i++)
		printf("%d\n", copy->n);
	return (i);
}
