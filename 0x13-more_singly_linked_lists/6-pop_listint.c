#include "lists.h"
/**
 * pop_listint - singly linked list
 * @head: integer
 *
 * Return: singly linked list node structure
 * for Holberton project
 */
int pop_listint(listint_t **head)
{
	listint_t *toDelete;
	int n = 0;

	if (*head == NULL)
		return (0);
	else
	{
		toDelete = *head;
		n = toDelete->n;
		*head = toDelete->next;
		free(toDelete);
	}
	return (n);
}
