#include "lists.h"
/**
 * free_listint - singly linked list
 * @head: string - (malloc'ed string)
 *
 * Return: a number
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
