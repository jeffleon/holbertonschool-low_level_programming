#include "lists.h"
/**
 * free_listint2 - singly linked list
 * @head: string - (malloc'ed string)
 *
 * Return: a number
 */
void free_listint2(listint_t **head)
{

	if (*head != NULL)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
}
