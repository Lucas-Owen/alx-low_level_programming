#include "lists.h"

/**
 * free_dlistint - frees all the nodes of a dlistint
 * @head: Head of the doubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
