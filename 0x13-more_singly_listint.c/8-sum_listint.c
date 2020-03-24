#include "lists.h"
/**
 * sum_listint - singly linked list
 * @head: string - (malloc'ed string)
 *
 * Return: a number
 */
int sum_listint(listint_t *head)
{
	listint_t *copia = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (copia)
	{
		sum += copia->n;
		copia = copia->next;
	}
	return (sum);
}
