#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: source string
* @s2: string to append
*
* Return: char*
*/
char *str_concat(char *s1, char *s2)
{
	char *a;
	int size1 = 0;
	int size2 = 0;
	int i, j;

	while (s1[size1] != '\0')
		size1++;

	while (s2[size2] != '\0')
		size2++;

	a = malloc(size1 + size2 + 1);

	if (a == NULL)
		return (0);

	for (i = 0; i < size1; i++)
		a[i] = s1[i];

	for (j = 0; j < size2; j++)
		a[j + i] = s2[j];

	return (a);
}
