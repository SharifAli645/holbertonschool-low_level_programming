#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @arr: source string
 *
 * Return: Always a modified array
 **/
char *cap_string(char *arr)
{
	char *ptr_arr;
	char sept[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}', '\n', '\t', '\0'};
	char *ptr_l;
	char *spt;
	int counter = 0;

	ptr_arr = arr;
	ptr_l = arr;
	spt = sept;

	while (*ptr_arr != '\0')
	{
		if (counter == 0)
		{
			if (*ptr_arr > 96 && *ptr_arr < 123)
			{
				*ptr_arr = (*ptr_arr - 32);
				ptr_arr++;
				counter = 1;
				continue;
			}
			ptr_arr++;
			counter = 1;
			continue;
		}

		if (*ptr_arr > 96 && *ptr_arr < 123)
		{
			while (*spt != '\0')
			{
				if (*ptr_l == *spt)
				{
					*ptr_arr = (*ptr_arr - 32);

				}
				spt++;
			}
			spt = sept;
		}
		ptr_l++;
		ptr_arr++;

	}
	return (arr);
}
