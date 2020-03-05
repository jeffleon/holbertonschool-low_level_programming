#include "holberton.h"

/**
 * _calloc - put other points
 * @nmemb: 6-6-6 the number of the best
 * @size: the argv array
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call_oc;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	call_oc = malloc(sizeof(char) * (size * nmemb));
	if (call_oc == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		call_oc[i] = 0;
	return (call_oc);
}

