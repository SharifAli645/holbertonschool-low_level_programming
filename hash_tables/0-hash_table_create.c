#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of the table
 *
 * Return: a pointer to one hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_node_t) * size);
	
	if (table == NULL)
		return (NULL);

	return (table);
}
