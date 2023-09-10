#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *ptr;

	while (i < ht->size)
	{
		while (ht->array[i])
		{
			ptr = ht->array[i];
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ht->array[i] = (ht->array[i])->next;
		}
		i++;
	}
	if (ht->array)
		free(ht->array);
	if (ht)
		free(ht);
}
