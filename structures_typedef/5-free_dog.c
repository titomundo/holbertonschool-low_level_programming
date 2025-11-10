#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory of a dog type
 * @d: dog to free
 *
 * Return: void
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
