#include "holberton.h"
/**
 * cap_string - check the code for Holberton School students.
 * @s: entry pointer
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int index = 1;

	while (s[index] != '\0')
	{
		while (!(s[index] >= 'a' && s[index] <= 'z'))
		index++;

			if (s[index - 1] == ' ' ||
			s[index - 1] == '(' ||
			s[index - 1] == ')' ||
			s[index - 1] == '?' ||
			s[index - 1] == ';' ||
			s[index - 1] == '!' ||
			s[index - 1] == ',' ||
			s[index - 1] == '.' ||
			s[index - 1] == '}' ||
			s[index - 1] == '\"' ||
			s[index - 1] == '{' ||
			s[index - 1] == '\t' ||
			s[index - 1] == '\n' ||
			s[index - 1] == '\0')
			{
				s[index] -= 32;
			}
		}
		index++;
	}
	return (s);
}
