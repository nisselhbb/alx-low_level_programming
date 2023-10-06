#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: no return
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *prst;
	unsigned char result;

	if (!ht)
		return;
	result = 0;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		prst = ht->array[i];
		while (prst)
		{
			if (result)
				printf(", ");
			printf("'%s': '%s'", prst->key, prst->value);
			prst = prst->next;
			result = 1;
		}
	}
	printf("}\n");
}
