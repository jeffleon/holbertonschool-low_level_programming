#include "lists.h"
/**
 * reverse_listint - this function reverse a link list
 * @head: its a head of linked list - (malloc'ed string)
 *
 * Return: a head of link list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp = *head;
	listint_t *change = *head;

	if (*head == NULL)
		return (NULL);
	tmp = change->next;
	change->next = NULL;
	while (tmp)
	{
		change = tmp;
		tmp = tmp->next;
		change->next = *head;
		*head = change;
	}
	return(*head);
}
