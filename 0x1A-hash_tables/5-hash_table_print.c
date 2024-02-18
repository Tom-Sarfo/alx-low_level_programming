#include "hash_tables.h"

/**
 * hash_table_print - prints key, value pairs of hash table
 *
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tmp;
	char *_sep;

	if (ht == NULL)
		return;

	printf("{");
	_sep = "";

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", _sep, tmp->key, tmp->value);
			_sep = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
