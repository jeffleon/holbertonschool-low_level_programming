#include "lists.h"
/**
 * find_listint_loop - singly linked list
 * @head: the head of linked list - (malloc'ed string)
 *
 * Return: a counter
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *no_loop = head;
	const listint_t *no_loop2;
	size_t count = 0;

	if (no_loop == NULL || head == NULL)
		return (0);
	while (no_loop)
	{
		no_loop2 = no_loop;
		no_loop = no_loop->next;
		free(no_loop2);
		count++;
		if (no_loop >= no_loop2)
			break;
	}
	return (count);
}
