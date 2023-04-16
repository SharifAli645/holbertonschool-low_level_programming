#include "hash_tables.h"
/**
 * fr_node - Free one node
 * @n: node
 * Return: Always void
 **/
void fr_node(hash_node_t *n)
{
	free(n->key);
	free(n->value);
	free(n);
}
/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if it succeeded, 0 otherwise
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	size_t index;
	hash_node_t *n_node, *ptr;

	if (key == NULL || ht == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (0);
	n_node->key = strdup(key);
	n_node->value = strdup(value);
	n_node->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = n_node;
	else
	{
		ptr = ht->array[index];
		if (strcmp(ptr->key, key) == 0)
		{
			n_node->next = ptr->next;
			ht->array[index] = n_node;
			fr_node(ptr);
			return (1);
		}
		while (ptr->next != NULL && strcmp(ptr->next->key, key) != 0)
			ptr = ptr->next;
		if (strcmp(ptr->key, key) == 0)
		{
			n_node->next = ptr->next->next;
			fr_node(ptr->next);
			ptr->next = n_node;
		} else
		{
			n_node->next = ht->array[index];
			ht->array[index] = n_node;
		}
	}
	return (1);
}
