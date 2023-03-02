#include "main.h"
/**
 * string_toupper - funciton that changes all lowercase letter to uppercase
 * @arr: source string
 *
 * Return: Always the string
 **/
char *string_toupper(char *arr)
{
	char *ptr_char;

	ptr_char = arr;

	while (*ptr_char != '\0')
	{
		if (*ptr_char > 96 && *ptr_char < 123)
		{
			*ptr_char = *ptr_char - (32);
		}
		ptr_char++;
	}

	return (arr);
}
