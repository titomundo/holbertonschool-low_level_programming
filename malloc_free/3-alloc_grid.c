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
	int **a = malloc(4 * height);

	if (a == NULL)
		return (0);

	for (i = 0; i < height; i++)
		a[i] = malloc(4 * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}


	return (a);
}
