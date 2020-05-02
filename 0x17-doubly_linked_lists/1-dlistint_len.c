#include "lists.h"
/**
 * dlistint_len - singly linked list
 * @h: string - (malloc'ed string)
 * Return: a number
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *copy = h;
	size_t i = 0;

	if (copy == NULL)
		return (0);
	for (; copy; copy = copy->next, i++)
	{}
	return (i);
}
