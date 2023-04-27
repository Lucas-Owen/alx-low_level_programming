#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list_t
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;
	list_t *temp = (list_t *) h;

	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		size++;
		temp = temp->next;
	}
	return (size);
}
