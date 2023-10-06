#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash
 * table
 * @ht: pointer the hash table where the key/value
 * is been added or updated to
 * @key: pointer to the key
 * @value: pointer to the value associated with the key.
 * It must be duplicated
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *prst;

	if (!ht || !key || key[0] == '\0')
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	prst = ht->array[i];
	for (; prst; prst = prst->next)
	{
		if (strcmp(key, prst->key) == 0)
		{
			free(prst->value);
			prst->value = strdup(value);
			if (prst->value == NULL)
				return (0);
			return (1);
		}
	}

	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[i];
	ht->array[i] = node;

	return (1);
}
