#include "lists.h"

/**
 * sum_listint - Returns the sum of all elements in the list
 * @head: Head of the listint
 * Return: Sum of the elements of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
