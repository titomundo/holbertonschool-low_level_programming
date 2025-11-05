#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory safely
* @b: memory to allocate
*
* Return: void*
*/
void *malloc_checked(unsigned int b)
{
	void *s = malloc(b);

	if (s == NULL)
	{
		free(s);
		return (0);
	}

	return (s);
}
