#include "lists.h"
/**
 * free_list - adds a
 * @head: pointer
 *
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
