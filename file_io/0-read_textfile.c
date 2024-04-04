#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and prints it
 * @filename: name of the file
 * @letters: number of letter to read from the file
 * Return: actual of character read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	ssize_t m;
	char *s;

	s = malloc(sizeof(char) * (letters + 1));
	if (!s)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (!fd)
		return (0);
	n = read(fd, s, letters);
	if (!n)
		return (0);
	m = write(0, s, n);
	if (!m)
		return (0);
	close(filename);
	return (m);
}
