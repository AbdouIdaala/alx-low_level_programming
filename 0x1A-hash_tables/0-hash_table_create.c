#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: The size of the array
 * Return: a pointer to the newly created hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	return (table);
}
