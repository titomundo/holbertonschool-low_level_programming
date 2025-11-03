#include <stdlib.h>

/**
* create_array - creates an array of chars and fills it with a char
* @size: size of the string
* @c: char to initialize the array
*
* Return: char*
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size < 1)
		return (0);

	a = malloc(size);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
