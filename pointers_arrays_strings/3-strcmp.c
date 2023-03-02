#include "main.h"
/**
 * _strcmp - function that compares two string
 * @s1: first string
 * @s2: second string
 *
 * Return: an integer
 **/
int _strcmp(char *s1, char *s2)
{
	char *ptr_s1;
	char *ptr_s2;
	int dif_num = 0;

	ptr_s1 = s1;
	ptr_s2 = s2;

	while (*ptr_s1 != '\0')
	{
		if (*ptr_s1 != *ptr_s2)
		{
			dif_num = (*ptr_s1 - *ptr_s2);

			return (dif_num);
		}
		ptr_s1++;
		ptr_s2++;
	}
	return (dif_num);
}
