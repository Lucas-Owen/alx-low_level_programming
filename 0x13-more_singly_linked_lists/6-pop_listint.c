#include "lists.h"

/**
 * pop_listint - Removes the first node and returns the element
 * @head: The listint_t
 * Return: The value at head->n or 0
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head);
	*head = (*head)->next;
	free(temp);
	return (n);
}
