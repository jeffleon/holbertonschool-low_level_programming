#include "holberton.h"
/**
 * main - singly linked list
 * @argc: string - (malloc'ed string)
 * @argv: description
 * Return: a number
 */
int main(int argc, char *argv[])
{
	int fd, fs, data, writed;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, ERROR97), exit(97);
	fs = open(argv[1], O_RDONLY);
	if (fs == -1)
		dprintf(STDERR_FILENO, ERROR98, argv[1]), exit(98);
	fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
		dprintf(STDERR_FILENO, ERROR98, argv[1]), exit(98);
	while (data > 0)
	{
		data = read(fs, buffer, 1024);
		if (data == -1)
			dprintf(STDERR_FILENO, ERROR98, argv[1]), exit(98);
		writed = write(fd, buffer, data);
		if (writed == -1)
			dprintf(STDERR_FILENO, ERROR99, argv[2]), exit(99);
	}
	if (close(fd))
		dprintf(STDERR_FILENO, ERROR100, fd), exit(100);
	if (close(fs))
		dprintf(STDERR_FILENO, ERROR100, fs), exit(100);
	return (0);
}
