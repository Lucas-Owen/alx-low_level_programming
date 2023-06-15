#include "lists.h"

/**
 * get_dnodeint_at_index - Get a new node at index of a doubly linked list
 * @head: Head of the doubly linked list
 * @index: Value at the new node
 * Return: Address of the node if exists or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head && index)
	{
		head = head->next;
		--index;
	}
	return (head);
}
