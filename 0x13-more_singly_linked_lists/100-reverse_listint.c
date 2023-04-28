#include "lists.h"

/**
 * reverse_listint_helper - Reverses a listing_t
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
 * reverse_listint - Reverses a listint_t
 * @head: Head of the linked list
 * Return: Address of the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *newHead;

	if (head == NULL)
		return (NULL);
	reverse_listint_helper(*head, &newHead);
	*head = newHead;
	return (newHead);
}
