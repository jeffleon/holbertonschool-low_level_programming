#include "lists.h"
/**
 * add_nodeint - singly linked list
 * @n: string - (malloc'ed string)
 * @head: a list
 * Return: a number
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_element = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);
	if (new_element == NULL)
		return (NULL);
	new_element->n = n;
	new_element->next = *head;
	*head = new_element;
	return (*head);
}
