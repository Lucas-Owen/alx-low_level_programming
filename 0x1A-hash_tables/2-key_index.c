#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: Key to be hashed
 * @size: Size of the array of the hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb(key) % size);
}
