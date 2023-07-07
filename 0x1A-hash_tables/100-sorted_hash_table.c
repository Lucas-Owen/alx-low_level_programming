#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
 * shash_table_create - Creates a hash table of specified size
 * @size: Size of the array of the hash table
 * Return: Pointer to the created table or NULL
*/
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table = malloc(sizeof(shash_table_t));
	unsigned int i;

	if (!table)
		return (NULL);
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		/* Remember to free table in case something goes wrong */
		free(table);
		return (NULL);
	}
	table->shead = NULL;
	table->stail = NULL;
	table->size = size;
	/* Initialize the array to NULL */
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	return (table);
}

/**
 * insert_shash_node - Inserts a node at the head of a linked list
 * @head: Head of the list
 * @node: Node to insert
 * Return: 1 if successful, 0 otherwise
*/
int insert_shash_node(shash_node_t **head, shash_node_t *node)
{
if (!head || !node)
		return (0);
	node->next = *head;
	*head = node;
	return (1);
}

/**
 * replace_key - Checks a list for duplicate key and replaces the value
 * @node: The head of the list
 * @key: New key
 * @value: New value
 * Return: 1 on finding duplicate, 0 otherwise
 */
int replace_key(shash_node_t *node, const char *key, const char *value)
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
 * fixup_table_pointers - Ensures the shead, stail, and snext pointers are
 * correct after insert
 * @ht: The hash table
 * @node: Newly inserted node
 * Return: void
 */
void fixup_table_pointers(shash_table_t *ht, shash_node_t *node)
{
	shash_node_t *temp = ht->shead;

	if (ht->shead == NULL)
	{
		ht->shead = node;
		ht->stail = node;
		return;
	}
	while (temp && strcmp(node->key, temp->key) > 0)
	{
		temp = temp->snext;
	}
	if (temp == NULL)
	{
		ht->stail->snext = node;
		node->sprev = ht->stail;
		ht->stail = node;
		return;
	}
	if (temp == ht->shead)
	{
		node->snext = ht->shead;
		ht->shead->sprev = node;
		ht->shead = node;
		return;
	}
	temp->sprev->snext = node;
	node->sprev = temp->sprev;
	node->snext = temp;
	temp->sprev = node;
}

/**
 * shash_table_set - Adds an element to the hash table
 * Elements are sorted by key, in ascending order by ascii value
 * In case of collision, adds the new node at the beginning of the list
 * @ht: Head of the hash_table
 * @key: The key
 * @value: The value
 * Return: 1 on Success, 0 on failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node;
	unsigned int index;

	if (!ht || !key || strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *) key, ht->size);
	node = ht->array[index];
	if (replace_key(node, key, value))
		return (1);
	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (0);
	node->next = NULL;
	node->value = NULL;
	node->snext = NULL;
	node->sprev = NULL;
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
	insert_shash_node(&ht->array[index], node);
	fixup_table_pointers(ht, node);
	return (1);
}


/**
 * find - Locate and return a value using a key in a linked list
 * @head: Head of the linked list
 * @key: Key of the list
 * Return: The value or NULL
*/
char *find(shash_node_t *head, const char *key)
{
	shash_node_t *temp = head;

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
 * shash_table_get - Retrieves a vaue associated with a key
 * @ht: Hash table
 * @key: Key
 * Return: The value associated with key or NULL
*/
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	if (!ht)
		return (NULL);
	if (!key || strlen(key) == 0)
		return (NULL);
	return (find(ht->array[key_index((unsigned char *) key, ht->size)], key));
}

/**
 * shash_table_print - Print a hash table like a python dict
 * @ht: The hash table
*/
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	temp = ht->shead;
	if (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->snext;
	}
	while (temp)
	{
		/* print the rest beginning with a comma*/
		while (temp)
		{
			printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->snext;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print a hash table like a python dict, in reverse
 * @ht: The hash table
*/
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	temp = ht->stail;
	if (temp)
	{
		printf("'%s': '%s'", temp->key, temp->value);
		temp = temp->sprev;
	}
	while (temp)
	{
		/* print the rest beginning with a comma*/
		while (temp)
		{
			printf(", '%s': '%s'", temp->key, temp->value);
			temp = temp->sprev;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: The hash table
*/
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *next;

	if (!ht)
		return;
	temp = ht->shead;
	while (temp)
	{
		next = temp->snext;
		free(temp->value);
		free(temp->key);
		free(temp);
		temp = next;
	}
	free(ht->array);
	free(ht);
}
