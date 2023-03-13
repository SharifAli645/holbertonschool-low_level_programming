#include <string.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: a string
 * @s2: a string
 *
 * Return: a pointer to newly allocated space
 **/
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int i;
	char *arr;

	size1 = strlen(s1);
	size2 = strlen(s2);
	arr = malloc(sizeof(char) * (size1 + size2 + 1));

	for (i = 0; i < (size1 + size2 + 1); i++)
	{
		if (i < size1)
		{
			arr[i] = *s1;
			s1++;
		} else
		{
			arr[i] = *s2;
			s2++;
		}
	}
	return (arr);
}
