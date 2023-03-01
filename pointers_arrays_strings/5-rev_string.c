#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a reverse string
 * @s: input string
 *
 * Return: Always void
 **/
void rev_string(char *s)
{
	char *left = s;
	char *rigth;
	int counter = 0;

	while (*left != '\0')
	{
		counter++;
		left++;
	}

	rigth = &s[counter - 1];
	left = s;

	while (left < rigth)
	{
		*left ^= *rigth;
		*rigth ^= *left;
		*left ^= *rigth;

		left++;
		rigth--;
	}
}
