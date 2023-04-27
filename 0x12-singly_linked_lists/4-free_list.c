#include "lists.h"

/**
 * free_list - Frees all malloced memory in the list_t
 * @head: The list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
