#include "lists.h"
/**
 * add_node_end - adds a
 * @head: pointer
 * @str: string
 *
 * Return: the address
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
