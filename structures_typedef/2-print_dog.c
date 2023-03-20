#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 *
 * Return: Always void
 **/
void print_dog(struct dog *d)
{
	printf("Name: ");
	if ((*d).name == NULL)
		puts("(nil)");
	else
		puts((*d).name);

	printf("Age: %f\n", (*d).age);

	printf("Owner: ");
	if ((*d).owner == NULL)
		puts("(nil)");
	else
		puts((*d).owner);
}
