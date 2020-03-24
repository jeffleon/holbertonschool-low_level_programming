#include "lists.h"
/**
 * get_nodeint_at_index - singly linked list
 * @head: string - (malloc'ed string)
 * @index: int number
 * Return: a number
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *copia = head;

	if (head == NULL)
		return (NULL);
	for (; copia && index > 0; index--)
	{
		copia = copia->next;
	}
	return (copia);
}
