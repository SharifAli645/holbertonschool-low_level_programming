#ifndef ONE
#define ONE
/**
 * struct dog_t - Short description
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: Longer description
 */
typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
