#include "main.h"

/**
 * alloc_grid - Function that retuns a pointer to a two dimesional array
 * @width: first parameter
 * @height: second parameter
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptrgrid;
	int w, h;

	if (width <= 0)
		return (NULL);

	if (height <= 0)
		return (NULL);

	ptrgrid = malloc(width * sizeof(int));
	if (ptrgrid == NULL)
		return (NULL);

	for (w = 0; w < width; w++)
	{
		ptrgrid[w] = malloc(width * sizeof(int));
		if (ptrgrid[w] == NULL)
		{
			for (h = 0; h < w; h++)
				free(ptrgrid[h]);
			free(ptrgrid);
			return (NULL);
		}
	}
	return (ptrgrid);
}
