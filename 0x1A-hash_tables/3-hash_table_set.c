#include "hash_tables.h"
#include <string.h>

/**
 * insert_at_head - Inserts a node at the head of a linked list
 * @head: Head of the list
 * @node: Node to insert
 * Return: 1 if successful, 0 otherwise
*/
int insert_at_head(hash_node_t **head, hash_node_t *node)
{
	if (!head || !node)
		return 0;
	node->next = *head;
	*head = node;
	return (1);
}

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Head of the hash_table
 * @key: The key
 * @value: The value
 * Return: 1 on Success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;

	if (!ht)
		return (0);
	if (!key || !value || strlen(key) == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->value = strdup(value);
	if (!node->value)
	{
		free(node);
		return (0);
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(node->value);
		free(node);
		return (0);
	}
	insert_at_head(&ht[key_index(key, ht->size)], node);
	return (1);
}
