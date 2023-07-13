#include "main.h"

/**
 * alloc_grid - Function that retuns a pointer to a two dimesional array
 * @width: first parameter
 * @height: second parameter
 *
 * Return: pointer
 */

/**
 * int **alloc_grid(int width, int height)
{
	int **ptrgrid;
	int i;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	ptrgrid = malloc(width * sizeof(int));
	if (ptrgrid == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		ptrgrid[i] = malloc(height * sizeof(int));
	}

	ptrgrid[i] = 0;
	return (ptrgrid);
}
*/


/**
 * free_grid - Function to free 2 dimensional grid
 * @grid: first parameter
 * @height: second parameter
 *
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
