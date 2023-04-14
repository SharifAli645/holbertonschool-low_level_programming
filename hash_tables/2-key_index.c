#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @size: size
 * @key: key
 *
 * Return: index
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	size_t index = hash_djb2(key);

	return (index % size);
}
