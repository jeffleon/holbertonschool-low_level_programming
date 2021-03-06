#include "lists.h"
/**
 * delete_nodeint_at_index - singly linked list
 * @head: string - (malloc'ed string)
 * @index: number to delete
 * Return: a number delete
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *todelete = *head, *tmp;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = todelete->next;
		free(todelete);
		return (1);
	}
	for (; todelete && index > 0; index--)
	{
		tmp = todelete;
		todelete = todelete->next;
		if (todelete == NULL)
			return (-1);
	}
	tmp->next = todelete->next;
	free(todelete);
	return (1);
}
