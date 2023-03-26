#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * complete - function that add string
 * @src: source string
 * @dest: array to complete
 *
 * Return: a pointer to a struct dog_t
 **/
void complete(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}
/**
 * new_dog - function that creater a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: a pointer to a struct dog_t
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *dog;
	char *fname;
	char *fowner;
	int le_na = 0;
	int le_ow = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (owner[le_ow])
		le_ow++;
	while (name[le_na])
		le_na++;
	dog = malloc(sizeof(struct dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	fname = malloc(le_na + 1);
	if (fname == NULL)
	{
		free(dog);
		return (NULL);
	}
	complete(fname, name);
	fowner = malloc(le_ow + 1);
	if (fowner == NULL)
	{
		free(fname);
		free(dog);
		return (NULL);
	}
	complete(fowner, owner);
	dog->name = fname;
	dog->age = age;
	dog->owner = fowner;
	return (dog);
}
