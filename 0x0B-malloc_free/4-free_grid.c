#include "main.h"
/**
* free_grid - frees a 2 dimension array
* @grid: memory block
* @height: array height
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
