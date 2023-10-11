#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers using
 * the linear search algorithm
 * @list: is a pointer to the head of the linked list
 * @value: is the value to search for
 * Return: pointer to the first node where value is located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr, *prev;

	if (!list)
		return (NULL);
	prev = list;
	curr = list->express;
	while (curr)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		if (curr->n >= value)
			break;
		prev = curr;
		if (!curr->express)
		{
			while (curr->next)
			{
				curr = curr->next;
			}
			break;
		}
		curr = curr->express;
	}
	if (curr)
		printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, curr->index);
	while (prev)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (prev == curr)
			break;
		prev = prev->next;
	}
	return (NULL);
}
