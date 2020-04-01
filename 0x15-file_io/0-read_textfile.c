#include "holberton.h"
/**
 * read_textfile - singly linked list
 * @filename: string - (malloc'ed string)
 * @letters: its a letter
 * Return: a number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	char *buf;

	buf = malloc(sizeof(char) * letters +1);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buf, letters);
	buf[letters] = '\0';
	write(1, buf, letters);
	close(fd);
	free(buf);
	return (letters);
}
