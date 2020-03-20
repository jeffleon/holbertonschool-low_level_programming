#include "lists.h"
/**
 * add_node_end - adds a
 * @head: pointer
 * @str: string
 *
 * Return: the address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t lenght = 0;
	list_t *newnode = NULL;
	list_t *tmp = *head;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	while (str[lenght])
		lenght++;

	newnode->str = strdup(str);
	newnode->len = lenght;
	newnode->next = NULL;

	if (!(*head))
	{
		*head = newnode;
		return (newnode);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newnode;

	return (*head);
}
