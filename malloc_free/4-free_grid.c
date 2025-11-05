#include <stdlib.h>

/**
* free_grid - frees memory from a grid
* @grid: grid to clear
* @height: matrix height
*
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
