#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a specified index
 * @head: The listint
 * @idx: Index to insert new node
 * @n: Value at new node
 * Return: Address of the new node or (NULL)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *prev = NULL, *new;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	while (temp != NULL && idx > 0)
	{
		idx--;
		prev = temp;
		temp = temp->next;
	}

	if (idx != 0)
		return (NULL);
	new->next = temp;
	if (prev == NULL)
	{
		*head = new;
		return (new);
	}
	prev->next = new;
	return (new);
}
