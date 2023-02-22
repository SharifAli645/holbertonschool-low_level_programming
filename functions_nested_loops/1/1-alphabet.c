#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - write the alphabet in lowercase
 *
 * Return: Always 0 (void)
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
	printf("%c", a);
	a++;
	}
	printf("\n");

	return;
}
