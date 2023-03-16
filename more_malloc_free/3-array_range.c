#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: initial number
 * @max: final number
 *
 * Return: a pointer to a integer array
 **/
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * 4);
	if (ptr == NULL)
		return (NULL);
	while (min <= max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
