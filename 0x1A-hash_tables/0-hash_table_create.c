#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table of specified size
 * @size: Size of the array of the hash table
 * Return: Pointer to the created table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (!table)
		return (NULL);
	table->array = malloc(size);
	if (!table->array)
	{
		/* Remember to free table in case something goes wrong */
		free(table);
		return (NULL);
	}
	table->size = size;
	/* Initialize the array to NULL */
	while (size > 0)
		table->array[--size] = NULL;
	return (table);
}
