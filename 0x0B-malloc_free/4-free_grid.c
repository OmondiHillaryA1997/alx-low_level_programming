#include "main.h"

/**
 * free_grid - Function that frees 2 dimensional grid
 * @grid: first parameter
 * @height: second parameter
 * Return: pointer
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
