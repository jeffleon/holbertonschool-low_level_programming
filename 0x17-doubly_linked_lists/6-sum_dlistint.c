#include "lists.h"
/**
 * sum_dlistint - singly linked list
 * @head: string - (malloc'ed string)
 * Return: a number
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *copy = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; copy; copy = copy->next)
		sum += copy->n;
	return (sum);
}
