#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to the hash table
 * Return: no return
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *prst, *temp;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		prst = ht->array[i];
		while (prst)
		{
			temp = prst;
			prst = prst->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
