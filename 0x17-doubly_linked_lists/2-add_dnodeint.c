#include "lists.h"
/**
 * add_dnodeint - singly linked list
 * @head: string - (malloc'ed string)
 * @n: pointer
 * Return: a number
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *copy = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	new_node->next = *head;
	if (copy != NULL)
		copy->prev = new_node;
	*head = new_node;
	return (new_node);
}
