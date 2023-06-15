#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at specified index of a dll
 * @h: Head of the doubly linked list
 * @idx: Index to insert, beginning at 0
 * @n: Data at the new node
 * Return: Address of the node if exists or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;

	if (h == NULL)
		return (NULL);
	if (index == 0)
		return (add_dnodeint(h, n));
	if (*h == NULL)
		return (NULL);
	
	for (curr = *h, --index; curr && index; --index, curr = curr->next)
		;
	if (!curr)
		return (NULL);
	if (!curr->next)
		return (add_dnodeint_end(&curr, n));
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	curr->next->prev = new;
	new->next = curr->next;
	curr->next = new;
	new->prev = curr;
	
	return (new);
}
