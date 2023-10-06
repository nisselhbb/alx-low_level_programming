#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated
 * with a key
 * @ht: pointer to the hash table to look into
 * @key: pointer to the key
 * Return: the value associated with the element,
 * or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *prst;

	if (!ht || !key || key[0] == '\0')
		return (NULL);
	i = key_index((const unsigned char *)key, ht->size);
	for (prst = ht->array[i]; prst; prst = prst->next)
	{
		if (strcmp(key, prst->key) == 0)
			return (prst->value);
	}
	return (NULL);
}
