#include "list.h"

/**
 * list_len - Calculates the length of a linked list
 * @h: The list_t
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;
	list_t *temp = h;

	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
