#include <stdio.h>
#include "holberton.h"
/**
 * _strpbrk - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 *
 * Return: Nothing.
 */
char *_strpbrk(char *s, char *accept)
{
	int length, length1, flag = 0;

	for (length = 0; *(s + length) != '\0'; length++)
	{
		for (length1 = 0; *(accept + length1) != '\0'; length1++)
		{
			if (*(s + length) == *(accept + length1))
			{
				flag = length;
				break;
			}
		}
		if (flag != 0)
		break;
	}
	if (flag == 0)
		return (NULL);
	return (s + flag);
}
