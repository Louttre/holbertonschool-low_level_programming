#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * _strlen - return legth of the string
 * @s: string
 * Return: int
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * create_file - function that creates a file
 * @filename: string that contain the name of the file to create
 * @text_content: text to insert in the created file
 * Return: 1 if it works -1 if it not
 */
int create_file(const char *filename, char *text_content)
{

	int fd, n;
	char *s;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	s = malloc(sizeof(char) * ((_strlen(text_content) + 1)));
	if (!s || !fd)
		return (-1);
	strcpy(s, text_content);
	n = write(fd, s, _strlen(text_content));
	if (!n || n != _strlen(text_content))
	{
		free(s);
		close(fd);
		return (-1);
	}
	free(s);
	close(fd);
	return (1);
}
