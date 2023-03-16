#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to
 * a 2 dimensional array of integers
 * @width: width
 * @height: height
 *
 * Return: a pointer to a 2D array
 **/
int **alloc_grid(int width, int height)
{
	int e;
	int **matrix;

	matrix = malloc(height * sizeof(int *));
	if (matrix == NULL)
		return (NULL);

	for (e = 0; e < height; e++)
	{
		matrix[e] = malloc(width * sizeof(int));
		if (matrix[e] == NULL)
		{
			e--;
			while (e >= 0)
			{
				free(matrix[e]);
				e--;
			}
			free(matrix);
			return (NULL);
		}
	}
	return (matrix);
}
