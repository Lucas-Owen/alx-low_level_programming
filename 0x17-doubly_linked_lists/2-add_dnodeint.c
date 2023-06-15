#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a doubly linked list
 * @head: Head of the doubly linked list
 * @n: Value at the new node
 * Return: Address of the new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

    if (head == NULL)
        return (NULL);
    new = malloc(sizeof(dlistint_t));

    if (new)
    {
        new->next = *head;
        new->prev = NULL;
        if (*head)
        {
            (*head)->prev = new;
        }
        *head = new;
    }

	return (new);
}
