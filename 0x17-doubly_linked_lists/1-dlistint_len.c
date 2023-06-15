#include "lists.h"

/**
 * print_dlistint - Finds the size of the list
 * @h: Head of the doubly linked list
 * Return: size of the list (number of nodes)
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *temp = h;

	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}
