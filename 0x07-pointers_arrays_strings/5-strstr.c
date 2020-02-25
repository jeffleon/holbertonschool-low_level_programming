#include <stdio.h>
#include "holberton.h"
/**
 * _strstr - prints buffer in hexa
 * @haystack: the address of memory to print
 * @needle: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strstr(char *haystack, char *needle)
{
	int length = 0, length1 = 0, aux = 0, length2 = 0;

	for (; *(haystack + length); length++)
	{
		for (; *(needle + length1);)
		{
			if (*(needle + length1) == *(haystack + length))
			{
				length++;
				length1++;
			}
			else
				haystack++;
		}
	}
	return (haystack);
}
