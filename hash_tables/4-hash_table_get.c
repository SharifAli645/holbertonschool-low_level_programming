#include "hash_tables.h"
/**
 * hash_table_t - function
 * @ht: tabke
 * @key: key
 *
 * Return: value
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ptr;

	if (key == NULL || ht == NULL)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);
	ptr = ht->array[idx];
	if (ptr == NULL)
		return (NULL);
	while (strcmp(ptr->key, key) && ptr != NULL)
		ptr = ptr->next;
	if (ptr == NULL)
		return (NULL);
	else
		return (ptr->value);

}
