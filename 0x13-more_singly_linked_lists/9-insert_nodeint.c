#include "lists.h"
/**
 * insert_nodeint_at_index - singly linked list
 * @head: string - (malloc'ed string)
 * @idx: int number
 * @n: int number
 * Return: a number
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copia = *head;
	listint_t *new_element = malloc(sizeof(listint_t));
	unsigned int count = 0;

	if (head == NULL && idx != 0)
		return (NULL);
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;
	if (idx == 0)
	{
		new_element->next = *head;
		*head = new_element;
		return (new_element);

	}
	for (; copia; copia = copia->next, count++)
	{
		if (count == (idx - 1))
		{
			new_element->next = copia->next;
			copia->next = new_element;
			return (new_element);
		}
	}
	return (NULL);
}
