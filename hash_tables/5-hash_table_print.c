#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 *
 * Return: Always void
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int e, ind = 0;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	putchar('{');
	for (e = 0; e < ht->size; e++)
	{
		ptr = ht->array[e];
		while (ptr != NULL)
		{
			if (ind == 1)
				printf(", ");
			printf("'%s': '%s'", ptr->key, ptr->value);
			ind = 1;
			ptr = ptr->next;
		}
	}
	putchar('}');
	putchar('\n');
}
