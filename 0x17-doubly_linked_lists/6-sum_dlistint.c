#include "lists.h"

/**
 * sum_dlistint - adds data in all the nodes of a dlistint
 * @head: Head of the doubly linked list
 * Return: Sum of all data in the list
 */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;

	while (head)
	{
		sum += head->n;
        head = head->next;
	}
    return (sum);
}
