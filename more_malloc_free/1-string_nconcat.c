#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat -  function that concatenates two strings
 * @s1: a string
 * @s2: a string
 * @n: bytes of s2
 *
 * Return: a pointer shall point to a newly
 * allocated space in memory
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int counter1 = 0;
	unsigned int counter2 = 0;
	int i = 0;
	unsigned int c1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	counter1 = strlen(s1);
	counter2 = strlen(s2);
	if (n > counter2)
		n = counter2;
	ptr = malloc(sizeof(char) * (counter1 + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (n > 0)
	{
		if (c1 != counter1)
		{
			ptr[i] = *s1;
			s1++;
			c1++;
			i++;
		}
		if (*s1 == '\0')
		{
			ptr[i] = *s2;
			s2++;
			n--;
			i++;
		}

	}
	ptr[i] = '\0';
	return (ptr);
}
