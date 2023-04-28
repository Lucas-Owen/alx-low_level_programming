#include "lists.h"

/**
 * add_nodeint_end - Add a node at the end of a linked list
 * @head: The listint_t
 * @str: A char * to be added to the new node
 * Return: The address of the new element or (NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (head == NULL)
		return (new);
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
