#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 *
 * Return: Always void
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int e;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	for (e = 0; e < ht->size; e++)
	{
		while (ht->array[e] != NULL)
		{
			ptr = ht->array[e]->next;
			free(ht->array[e]->key);
			free(ht->array[e]->value);
			free(ht->array[e]);
			ht->array[e] = ptr;
		}
	}
	free(ht->array);
	free(ht);
}
