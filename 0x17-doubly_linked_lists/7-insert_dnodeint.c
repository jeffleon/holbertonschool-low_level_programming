#include "lists.h"
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
	dlistint_t *copy_p;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (h == NULL && idx != 0)
		return (NULL);
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	for (i = 0; i < idx; copy_n = copy_n->next, i++)
		copy_p = copy_n;
	new_node->next = copy_n;
	copy_n->prev = new_node;
	if (idx == 0)
		*h = new_node;
	else
	{
		copy_p->next = new_node;
		new_node->prev = copy_p;
	}
	return (*h);
}
