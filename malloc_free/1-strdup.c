#include <stdlib.h>

/**
* _strdup - creates an array of chars with a copy of a string
* @str: source string
*
* Return: char*
*/
char *_strdup(char *str)
{
	char *a;
	int size = 0;
	int i;

	if (!str)
		return (0);

	while (str[size] != '\0')
		size++;

	a = malloc(size + 1);

	if (a == NULL)
		return (0);

	for (i = 0; i < size; i++)
		a[i] = str[i];

	return (a);
}
