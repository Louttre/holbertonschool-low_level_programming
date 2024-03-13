#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - count number of case in array
 * @s: string to count
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: string to cpy
 * Return: pointer to the new tab
 */
char *_strdup(char *str)
{
	char *newstr;
	int i = 0;

	if (str == NULL)
		return (NULL);
	newstr = malloc(sizeof(char) * (_strlen(str) + 1));
	if (newstr == NULL)
		return (NULL);
	while (i < _strlen(str))
	{
		newstr[i] = str[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/**
 * new_dog - instance a new dog.
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDogo;

	NewDogo = malloc(sizeof(dog_t));
	if (!NewDogo)
		return (NULL);
	NewDogo->name = _strdup(name);
	if (!NewDogo->name)
	{
		free(NewDogo);
		return (NULL);
	}
	NewDogo->age = age;
	NewDogo->owner = _strdup(owner);
	if (!NewDogo->owner)
	{
		free(NewDogo->name);
		free(NewDogo);
		return (NULL);
	}
	return (NewDogo);
}
