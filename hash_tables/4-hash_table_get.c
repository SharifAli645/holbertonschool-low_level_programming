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
	unsigned long int cnt = 0;

	while(cnt < ht->size)
	{
		if(strcmp(ht->array[cnt]->key, key) == 0)
			return(ht->array[cnt]->value);
		cnt++;
	}
	return (NULL);
}
