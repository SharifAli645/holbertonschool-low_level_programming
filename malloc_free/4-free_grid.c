#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * previously created
 * @grid: matrix
 * @height: height
 *
 * Return: Always void
 **/
void free_grid(int **grid, int height)
{
	int alt = height - 1;

	while (alt >= 0)
	{
		free(grid[alt]);
		alt--;
	}
}
