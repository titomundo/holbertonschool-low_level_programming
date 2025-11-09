#include "dog.h"

/**
* init_dog - inits a dog type
* @d: dog to init
* @name: dog's new name
* @age: dog's new age
* @owner: dog's new owner
*
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
