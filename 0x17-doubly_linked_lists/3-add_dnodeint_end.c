#include "lists.h"
/**
 * add_dnodeint_end - singly linked list
 * @head: string - (malloc'ed string)
 * @n: pointer
 * Return: a number
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *copy = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!head)
		return (NULL);
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}
	for (; copy->next; copy = copy->next)
	{}
	copy->next = new_node;
	if (copy != NULL)
		new_node->prev = copy;
	return (new_node);
}
