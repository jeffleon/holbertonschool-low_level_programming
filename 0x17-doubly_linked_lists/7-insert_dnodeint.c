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
/**
 * insert_dnodeint_at_index - singly linked list
 * @h: string - (malloc'ed string)
 * @idx: pointer
 * @n: integer
 * Return: a number
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *copy_n = *h;
	dlistint_t *new_node = NULL;
	unsigned int i = 0;
	size_t length = 0;

	length = dlistint_len(*h);
	if (idx > length)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (length == idx)
		return (add_dnodeint_end(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	for (i = 0; i < idx - 1; copy_n = copy_n->next, i++)
	{}
	new_node->next = copy_n->next;
	new_node->prev = copy_n;
	copy_n->next->prev = new_node;
	copy_n->next = new_node;
	return (new_node);
}
