#ifndef ONE
#define ONE
/**
 * struct dog - Short description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
