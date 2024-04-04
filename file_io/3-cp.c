#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * _cp - program that copies the content of a file to another file
 * @source: name of the source file
 * @target: name of the target file
 */
void _cp(const char *source, const char *target)
{
	int check_write, fd_source, fd_target, check_read = 1;
	char *s[1024];

	fd_source = open(source, O_RDONLY);
	fd_target = open(target, O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (!fd_source)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
		exit(98);
	}
	else if (!fd_target)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
		exit(99);
	}
	while ((check_read = read(fd_source, s, 1024)) > 0)
	{
		check_write = write(fd_target, s, check_read);
		if (check_write != check_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", target);
			exit(99);
		}
	}
	if (close(fd_source) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", source);
		exit(100);
	}
	else if (close(fd_target) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", source);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);
	return (0);
}
