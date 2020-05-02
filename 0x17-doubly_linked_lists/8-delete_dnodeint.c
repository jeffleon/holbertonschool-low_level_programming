#include "lists.h"
/**
 * delete_dnodeint_at_index - singly linked list
 * @head: string - (malloc'ed string)
 * @index: pointer
 * Return: a number
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *copy_n = *head, *copy_p;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	for (i = 0; i < index; copy_n = copy_n->next, i++)
	{
		copy_p = copy_n;
		if (copy_n == NULL)
			return (-1);
	}
	if (index == 0)
	{
		*head = copy_n->next;
		copy_p = *head;
		if (*head != NULL)
			copy_p->prev = NULL;
		free(copy_n);
		return (1);
	}
	copy_p->next = copy_n->next;
	if (copy_p->next != NULL)
	{
		copy_p = copy_p->next;
		copy_p->prev = copy_n->prev;
	}
	free(copy_n);
	return (1);
}
