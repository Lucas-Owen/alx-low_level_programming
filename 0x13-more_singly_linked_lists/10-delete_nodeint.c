#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - Deletes a node at a specified index
 * @head: The list
 * @index: Index of the node to delete
 * Return: (1) Success, (-1) Failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev = NULL;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp != NULL && index > 0)
	{
		index--;
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL || index != 0)
		return (-1);
	if (prev == NULL)
		*head = (*head)->next;
	else
		prev->next = temp->next;
	free(temp);
	return (1);
}
