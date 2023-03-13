#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: a pointer
 **/
char *_strdup(char *str)
{
	char *arr;
	int i;
	int size = strlen(str);

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < size + 1; i++)
	{
		arr[i] = *str;
		str++;
	}
	return (arr);
}
