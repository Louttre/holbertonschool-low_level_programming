#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_gog - free the doggo
 * @d: the doggo
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
