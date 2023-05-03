#include "lists.h"

/**
 * reverse_listint_helper - Reverses a listing_t, recursively
 * @head: Current head of the list
 * @newHead: Where the new head will be placed
 * Return: *head
 */
listint_t *reverse_listint_helper(listint_t *head, listint_t **newHead)
{
	listint_t *curr;

	if (head == NULL)
		return (NULL);
	if (head->next == NULL)
	{
		*newHead = head;
		return (head);
	}
	curr = head;
	head = reverse_listint_helper(head->next, newHead);
	head->next = curr;
	curr->next = NULL;
	return (curr);
}

/**
 * reverse_listint - Reverses a listint_t, iteratively
 * @head: Head of the linked list
 * Return: Address of the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	*curr = (*head)->next;
	(*head)->next = NULL;
	while (curr != NULL)
	{
		temp = curr->next;
		curr->next = *head;
		*head = curr;
		curr = temp;
	}
	return (*head);
}
