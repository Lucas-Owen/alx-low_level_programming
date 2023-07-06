#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp, *next;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			next = temp->next;
			free(temp->value);
			free(temp->key);
			free(temp);
			temp = next;
		}
	}
	free(ht);
}
