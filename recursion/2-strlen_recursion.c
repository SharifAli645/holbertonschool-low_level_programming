#include "main.h"
/**
 * _strlen_recursion -  function that returns the length of a string
 * @s: source string
 *
 * Return: +1 if the pointer is not \0
 **/
int _strlen_recursion(char *s)
{
	char *ptr = s;

	if (*ptr != '\0')
	{
		ptr++;
		return (1 + _strlen_recursion(ptr));
	}
	return (0);
}
