#include "lists.h"

/**
 * free_listint2 - Frees all malloced memory in the list_t
 * @head: The listint_t
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		(*head) = temp;
	}
}
