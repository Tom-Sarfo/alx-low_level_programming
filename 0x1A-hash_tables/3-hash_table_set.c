#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds element to hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value of the new element
 *
 * Return: 1 on success, 0 on failure
 */
int
hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *new_hash = NULL;
	hash_node_t *tmp = NULL;

	if (!ht || !key || !(*key) || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp && strcmp(tmp->key, key) != 0)
		tmp = tmp->next;

	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		return (1);
	}


	new_hash = malloc(sizeof(*new_hash));
	if (!new_hash)
		return (0);

	new_hash->key = strdup(key);
	new_hash->value = strdup(value);

	new_hash->next = ht->array[idx];
	ht->array[idx] = new_hash;

	return (1);
}
