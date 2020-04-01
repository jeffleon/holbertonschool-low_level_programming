#include "holberton.h"
/**
 * read_textfile - singly linked list
 * @filename: string - (malloc'ed string)
 * @letters: its a letter
 * Return: a number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, number_char, dont_write;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	number_char = read(fd, buf, letters);
	buf[number_char] = '\0';
	dont_write = write(STDIN_FILENO, buf, letters);
	if (dont_write == -1)
		return(dont_write);
	close(fd);
	free(buf);
	return (number_char);
}
