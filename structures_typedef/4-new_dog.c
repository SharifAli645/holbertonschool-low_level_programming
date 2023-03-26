#include <stdlib.h>
#include "dog.h"
#include <string.h>
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

	dog = malloc(sizeof(struct dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	dog->name = strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return(NULL);
	}
	dog->age = age;
	dog->owner = strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return(NULL);
	}
	return (dog);
}
