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

	ptr_arr = arr;

	while (*ptr_arr != '\0')
	{
		if ((*ptr_arr > 96 && *ptr_arr < 123))
		{
			*ptr_arr = (*ptr_arr - 32);

			ptr_arr++;
			while (*ptr_arr > 96 && *ptr_arr < 123)
			{
				ptr_arr++;
			}
			ptr_arr--;

		} else if ((*ptr_arr > 64 && *ptr_arr < 91))
		{
			ptr_arr++;
			while (*ptr_arr > 96 && *ptr_arr < 123)
			{
				ptr_arr++;
			}
			ptr_arr--;
		}
		ptr_arr++;
	}

	return (arr);
}
