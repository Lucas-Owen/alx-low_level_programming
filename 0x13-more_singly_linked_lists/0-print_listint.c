#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a list_t list
 * @h: The list_t
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;
	listint_t *temp = (listint_t *) h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		size++;
		temp = temp->next;
	}
	return (size);
}
