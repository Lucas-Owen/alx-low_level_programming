#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Print a hash table like a python dict
 * @ht: The hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			/* print the rest beginning with a comma*/
			while (temp)
			{
				printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
