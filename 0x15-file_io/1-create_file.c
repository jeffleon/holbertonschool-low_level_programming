#include "holberton.h"
/**
 * create_file - singly linked list
 * @filename: string - (malloc'ed string)
 * @text_content: its a content
 * Return: a number
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT, 0600);

	if (fd == -1)
		return (fd);

	while (text_content[count])
		count++;
	write(fd, text_content, count);
	close(fd);
	return (1);
}
