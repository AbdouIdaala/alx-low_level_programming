#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: the hash table
 * @key: the key, it can not be an empty string
 * @value: the value of the key, it must be duplicated
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_key = NULL;
	unsigned long int index;
	hash_node_t *new = malloc(sizeof(hash_node_t));

	if (!key || !new)
		return (0);
	copy_key = strdup(key);
	index = key_index((const unsigned char *)copy_key, ht->size);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}