#include <math.h>
#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted linked list of integers using
 * the Jump search algorithm
 * @list: is a pointer to the head of the linked list
 * @size: is the number of elements in list
 * @value: is the value to search for
 * Return: pointer to the first node where value is located or -1
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t i, step = sqrt(size), k;
	listint_t *prev = NULL, *curr = list;

	if (!list || !size)
		return (NULL);
	for (i = 0; i < size && curr->n < value && curr->next; i += step)
	{
		prev = curr;
		for (k = 0; k < step && curr->next; k++)
			curr = curr->next;
		printf("Value checked array[%ld] = [%d]\n", curr->index, curr->n);

	}
	printf(
		"Value found between indexes [%ld] = [%ld]\n", prev->index, curr->index);
	for (; prev != curr->next; prev = prev->next)
	{
		printf("Value checked array[%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
