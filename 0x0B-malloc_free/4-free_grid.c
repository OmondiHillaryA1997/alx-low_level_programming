#include "main.h"

/**
 * free_grid - Function that frees a 2 dimensional grid priviously created
 * @grid: first argument
 * @height: second argument
 *
 * Return: pointer
 */

void free_grid(int **grid, int height)
{
	int h;

	if (grid == NULL)
		return;

	if (height <= 0)
		return;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
