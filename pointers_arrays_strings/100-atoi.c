#include "main.h"
#include <stdio.h>
/**
 * _atoi - functions that converts a string to an integer
 * @s: the string
 *
 * Return: an integer
 **/
int _atoi(char *s)
{
	char *ptr_ri = s;
	int integer = 0;
	int ten = 0;
	int less = 0;

	while (*ptr_ri != '\0')
	{
		if (*ptr_ri == 45)
		{
			less++;
		}

		if (*ptr_ri > 47 && *ptr_ri < 58)
		{
			integer = (*ptr_ri - 48) + ((integer) * (10 * ten));

			ptr_ri++;

			if ((*ptr_ri <= 47 || *ptr_ri >= 58) && *ptr_ri != '\0')
			{
				return (integer);
			}

			ptr_ri--;
		}

		ten = 1;
		ptr_ri++;
	}
	if ((less % 2) != 0)
		integer = integer * -1;

	return (integer);
}
