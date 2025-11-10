#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * new_dog - returns a new dog instance
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 *
 * Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i;
	int name_len = _strlen(name);
	int owner_len = _strlen(owner);

	doggy = malloc(sizeof(dog_t));

	if (!doggy || !name || !owner)
	{
		free(doggy);
		return (0);
	}

	doggy->name = malloc(name_len + 1);
	doggy->owner = malloc(owner_len + 1);

	if (!doggy->name || !doggy->owner)
	{
		free(doggy->name);
		free(doggy->owner);
		free(doggy);
		return (0);
	}

	for (i = 0; i < name_len; i++)
		doggy->name[i] = name[i];

	doggy->name[i] = '\0';

	for (i = 0; i < owner_len; i++)
		doggy->owner[i] = owner[i];

	doggy->owner[i] = '\0';

	doggy->age = age;

	return (doggy);
}
