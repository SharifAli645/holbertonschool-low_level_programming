#include <stdlib.h>
#include "dog.h"
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
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
