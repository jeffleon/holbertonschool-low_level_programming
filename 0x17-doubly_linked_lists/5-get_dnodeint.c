#include "lists.h"
/**
 * get_dnodeint_at_index - singly linked list
 * @head: string - (malloc'ed string)
 * @index: pointer
 * Return: a number
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *copia = head;

	if (head == NULL)
		return (NULL);
	for (; copia && index > 0; index--)
		copia = copia->next;
	return (copia);
}
