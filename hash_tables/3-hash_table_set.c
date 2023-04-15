#include "hash_tables.h"
/**
 * new_node - function that adds a node to list not empty
 * @ht: table
 * @key: key
 * @value: value
 * @index: index
 *
 * Return: 0 if it failed, 1 if it works
 **/
int new_node(hash_table_t *ht, const char *key, const char *value,
		size_t index)
{
	hash_node_t *temp;
	hash_node_t *ptr;

	temp = ht->array[index];
	while (temp != NULL)
	{
		int e = strcmp(temp->key, key);

		if (e == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
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
	return (1);
}
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

	if (!key || !ht)
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
		if (!new_node(ht, key, value, index))
			return (0);
	}
	return (1);
}
