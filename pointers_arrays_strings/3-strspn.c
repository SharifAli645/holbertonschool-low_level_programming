#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: segment to compare
 * @accept: source bytes
 *
 * Return: an integer (the lengt)
 **/
unsigned int _strspn(char *s, char *accept)
{
	char *ptr_s;
	char *ptr_a;
	int counter = 0;

	ptr_s = s;
	ptr_a = accept;

	while (*ptr_s != '\0')
	{
		while (*ptr_a != '\0')
		{
			if (*ptr_a == *ptr_s)
			{
				ptr_s++;
				ptr_a = accept;
				counter++;
				break;
			}
			ptr_a++;
		}
		if (*ptr_a == '\0')
			return (counter);
	}
	return (counter);
}
