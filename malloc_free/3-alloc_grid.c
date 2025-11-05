#include <stdlib.h>

/**
* alloc_grid - creates a matrix of width x height
* @width: matrix width
* @height: matrix height
*
* Return: int**
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a = malloc(sizeof(int *) * height);

	if (width < 1 || height < 1)
		return (0);

	if (a == NULL)
		return (0);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);

		if (a[i] == NULL)
		{
			for (j = 0; j < i; i++)
				free(a[j]);

			free(a);
			return (0);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
