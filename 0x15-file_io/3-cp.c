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
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, ERROR97);
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	fs = open(argv[1], O_RDONLY);
	fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while (data > 0)
	{
		data = read(fs, buffer, 1024);
		writed = write(fd, buffer, data);
			if (writed == -1)
			{
				dprintf(STDERR_FILENO, ERROR99, argv[2]);
				exit(99);
			}
	}
	if (data == -1)
	{
		dprintf(STDERR_FILENO, ERROR98, argv[1]);
		exit(98);
	}
	if (close(fd))
	{
		dprintf(STDERR_FILENO, ERROR100, fd);
		exit(100);
	}
	if (close(fs))
	{
		dprintf(STDERR_FILENO, ERROR100, fs);
		exit(100);
	}
	return (0);
}
