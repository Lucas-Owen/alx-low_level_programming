#include "lists.h"

/**
 * free_listint - Frees all malloced memory in the list_t
 * @head: The listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
