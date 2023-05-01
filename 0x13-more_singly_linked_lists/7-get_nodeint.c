#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of the list
 * @head: The list
 * @index: The node to return, starting from 0
 * Return: The node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index > 0)
	{
		index--;
		head = head->next;
	}

	return (head);
}
