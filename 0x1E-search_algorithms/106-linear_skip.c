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
	for (; curr && curr->n < value; curr = curr->express)
	{
		prev = curr;
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		if (!curr->express)
			break;
	}
	printf(
		"Value found between indexes [%ld] and [%ld]\n", prev->index, curr->index);
	for (; prev; prev = prev->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
