#include "lists.h"
/**
 * add_nodeint_end - singly linked list
 * @head: string - (malloc'ed string)
 * @n: int number
 * Return: a number
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));
	listint_t *copia = *head;

	if (!head)
		return (NULL);
	if (!new_element)
		return (NULL);
	new_element->n = n;
	new_element->next = NULL;
	if (*head == NULL)
	{
		*head = new_element;
		return (new_element);
	}
	while (copia->next)
	{
		copia = copia->next;
	}

	copia->next = new_element;
	return (*head);
}
