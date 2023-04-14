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

	if (!key)
		return 0;

	index = key_index((const unsigned char *) key, ht->size);

	if(ht->array[index] == NULL)
	{
		ht->array[index]->value = strdup(value);
		if (!ht->array[index]->value)
			return (0);
		ht->array[index]->key = (char *) key;
		ht->array[index]->next = NULL;
	} else
	{
		ht->array[index]->next = malloc(sizeof(hash_node_t));
		if (!ht->array[index]->next)
			return (0);
		ht->array[index]->next->value = strdup(value);
		if (!ht->array[index]->next->value)
			return (0);
		ht->array[index]->next->key = (char *) key;
		ht->array[index]->next->next = ht->array[index];
	}
	return (1);
}
