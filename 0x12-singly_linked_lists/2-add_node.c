#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	size_t length = 0;
	new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);
	if (!head)
		return (NULL);
	while (str[length])
	length++;

	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return(*head);
}
