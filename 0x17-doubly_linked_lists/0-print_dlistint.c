#include "lists.h"

/**
 * print_dlistint - prints all the elmenents of a dlistint
 * @h: Head of the doubly linked list
 * Return: size of the list (number of nodes)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t size = 0;
	dlistint_t *temp = (dlistint_t *) h;

	while (temp)
	{
		printf("%d\n", temp->n);
		size++;
		temp = temp->next;
	}
	return (size);
}
