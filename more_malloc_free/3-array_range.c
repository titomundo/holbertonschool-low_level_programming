#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array with numbers from min to max
 * @min: max number
 * @max: min number
 *
 * Return: int*
 */
int *array_range(int min, int max)
{
	int *a;
	int i, diff;

	if (min > max)
		return (0);

	diff = max - min;

	a = malloc((diff + 1) * sizeof(int));

	if (a == NULL)
		return (0);

	for (i = 0; i <= diff; i++)
		a[i] = min + i;

	return (a);
}
