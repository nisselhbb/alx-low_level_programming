#include "hash_tables.h"

/**
 * hash_table_create - creates a hash tables
 * @size: the size of the array
 * Return: a pointer to the newly created hash table,
 * or NULL if something went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->size = size;
	return (table);
}
