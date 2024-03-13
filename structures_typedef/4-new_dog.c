#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
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
	NewDogo->name = name;
	NewDogo->age = age;
	NewDogo->owner = owner;
	return (NewDogo);
}
