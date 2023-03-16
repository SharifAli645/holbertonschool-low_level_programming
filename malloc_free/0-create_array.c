#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars
 * @size: size of the array
 * @c: character of the array
 *
 * Return: A pointer to the array of chars
 **/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
