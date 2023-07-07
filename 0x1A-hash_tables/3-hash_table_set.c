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
		return (0);
	node->next = *head;
	*head = node;
	return (1);
}

/**
 * check_duplicate - Checks a list for duplicate key and replaces the value
 * @node: The head of the list
 * @key: New key
 * @value: New value
 * Return: 1 on finding duplicate, 0 otherwise
 */
int check_duplicate(hash_node_t *node, const char *key, const char *value)
{
	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = NULL;
			if (value)
				node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	return (0);
}
/**
 * hash_table_set - Adds an element to the hash table
 * In case of collision, adds the new node at the beginning of the list
 * @ht: Head of the hash_table
 * @key: The key
 * @value: The value
 * Return: 1 on Success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned int index;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];
	if (check_duplicate(node, key, value))
		return (1);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->next = NULL;
	node->value = NULL;
	if (value)
	{
		node->value = strdup(value);
		if (!node->value)
		{
			free(node);
			return (0);
		}
	}
	node->key = strdup(key);
	if (!node->key)
	{
		free(node->value);
		free(node);
		return (0);
	}
	insert_at_head(&ht->array[index], node);
	return (1);
}
