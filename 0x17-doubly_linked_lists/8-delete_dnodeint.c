#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete a node at specified index of a dll
 * @head: Head of the doubly linked list
 * @index: Index to insert, beginning at 0
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *temp;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	for (curr = *head, --index; curr && index; --index, curr = curr->next)
		;
	if (!curr || !curr->next)
		return (-1);

	temp = curr->next;
	curr->next = curr->next->next;
	if (curr->next)
		curr->next->prev = curr;
	free(temp);
	return (1);
}
