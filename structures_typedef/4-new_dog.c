#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *NewDogo;

	NewDogo = malloc(sizeof(dog_t));
	NewDogo->name = name;
	NewDogo->age = age;
	NewDogo->owner = owner;
	return (NewDogo);
	
}
