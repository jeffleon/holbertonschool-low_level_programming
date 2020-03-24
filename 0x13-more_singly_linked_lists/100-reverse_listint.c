#include "lists.h"
/**
 * listint_len - singly linked list
 * @h: string - (malloc'ed string)
 *
 * Return: a number
 */
listint_t *reverse_listint(listint_t **head)
{
        const listint *copia_in = h, *copia_end = h;
        size_t count_end = 0, count_in = 0, tmp;

        for (;copia_in;copia_in = copia_in->next)
		count++;
	if (copia == NULL)
                return (0);
	copia_in = *head;
        for (;copia_in && count_in < 0; count_in--, copia_in = copia_in->next)
	{
		for (;copia_end && count_end < 0; count_end--, copia_end = copia_end->next)
        	{
			copia_in->n = tmp;
			copia_in->n = copia_end->n;
			copia_end->n = tmp:
        	}
	}
        return (*head);
}
