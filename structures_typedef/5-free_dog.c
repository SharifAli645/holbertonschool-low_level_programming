#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function that frees dogs
 * @d: pointer to struct dog
 *
 * Return: Always void
 **/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);
	free(d->name);
	free(d->owner);
	free(d);
}
