#include "lists.h"
/**
 * free_dlistint - singly linked list
 * @head: string - (malloc'ed string)
 * Return: a number
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
