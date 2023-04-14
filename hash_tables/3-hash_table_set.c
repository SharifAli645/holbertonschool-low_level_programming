#include "hash_tables.h"
/**
 * hash_table_set - tabloe
 * @ht: tab
 * @key: kk
 * @value: v
 *
 * Return: 4;
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *ptr;

	if (!key)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (!ht->array[index])
			return (0);
		ht->array[index]->value = strdup(value);
		if (!ht->array[index]->value)
		{
			free(ht->array[index]);
			return (0);
		}
		ht->array[index]->key = (char *) key;
		ht->array[index]->next = NULL;
	} else
	{
		ptr = malloc(sizeof(hash_node_t));
		if (!ptr)
			return (0);
		ptr->value = strdup(value);
		if (!ptr->value)
		{
			free(ptr);
			return (0);
		}
		ptr->key = (char *) key;
		ptr->next = ht->array[index];
		ht->array[index]->next = NULL;
		ht->array[index] = ptr;
	}
	return (1);
}
