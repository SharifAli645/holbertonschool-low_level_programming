#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - function that initialize a variable of type
 * @d: pointer to structure dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: Always void
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d == NULL)
	{
		printf("Ok\n");
		exit(0);
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
