#include "hash_tables.h"
#include <string.h>

/**
 * find - Locate and return a value using a key in a linked list
 * @head: Head of the linked list
 * @key: Key of the list
 * Return: The value or NULL
*/
char *find(hash_node_t *head, const char *key)
{
	hash_node_t *temp = head;

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}

/**
 * hash_table_get - Retrieves a vaue associated with a key
 * @ht: Hash table
 * @key: Key
 * Return: The value associated with key or NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (!ht)
		return (NULL);
	if (!key || strlen(key) == 0)
		return (NULL);
	return find(ht->array[key_index(key, ht->size)], key);
}
