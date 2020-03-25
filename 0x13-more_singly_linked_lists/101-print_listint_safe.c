#include "lists.h"
/**
 * print_listint_safe - singly linked list
 * @head: the head of linked list - (malloc'ed string)
 *
 * Return: a counter
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *no_loop = head;
	const listint_t *no_loop2;
	size_t count = 0;

	while (no_loop)
	{
		no_loop2 = no_loop;
		no_loop = no_loop->next;
		printf("[%p] %d\n", (void *) no_loop2, no_loop2->n);
		count++;
		if (no_loop >= no_loop2)
		{
			printf("-> [%p] %d\n", (void *) no_loop2->next, no_loop2->next->n);
			break;
		}
	}
	return (count);
}
