#include "lists.h"
/**
 * free_dlistint - singly linked list
 * @head: string - (malloc'ed string)
 * Return: a number
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;
	if (*head != NULL)
	{
		free_dlistint(&((*head)->next));
		free(*head);
		*head = NULL;
	}
}
