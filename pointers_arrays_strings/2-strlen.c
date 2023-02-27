#include "main.h"
/**
 * _strlen - counts characters
 * @s: string
 *
 * Return: the size of the string
 **/
int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
	{
		a++;
	}
	return (a);
}
