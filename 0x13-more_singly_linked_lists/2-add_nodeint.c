#include "lists.h"

/**
 * add_nodeint - Add a node at the beginning of a linked list
 * @head: The listint_t
 * @str: String to be stored at new node
 * Return: The address of the new element or (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	if (head != NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
