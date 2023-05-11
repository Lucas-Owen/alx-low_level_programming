#include "lists.h"

/**
 * node_visited - Checks if a node has been visited in a linked list
 * to avoid loops
 * @head: The linked list containing all the nodes
 * @node: A new node to check if it has been visited
 * @prev: The node just before node, this is where to stop the search
 * Return: 1 if the node is in the list, 0 otherwise
 */
int node_visited(listint_t *head, listint_t *node, listint_t *prev)
{
	if (prev == NULL || node == NULL)
		return (0);
	while (head != prev)
	{
		if (head == node)
			return (1);
		head = head->next;
	}
	if (head == node)
		return (1);
	return (0);
}

/**
 * free_listint_safe_helper - Frees all malloced memory in the list_t
 * Can free lists with a loop
 * @h: The listint_t
 * @node: The current node
 * @prev: Previous node
 * Return: Number of nodes freed
 */
size_t free_listint_safe_helper(listint_t *h, listint_t *node, listint_t *prev)
{
	size_t size = 0;

	if (node == NULL)
		return (0);
	if (node_visited(h, node, prev))
	{
		return (0);
	}
	size += free_listint_safe_helper(h, node->next, node);
	free(node);
	size++;
	return (size);
}

/**
 * free_listint_safe - Frees all malloced memory in the list_t
 * Can free lists with a loop
 * @h: The listint_t
 * Return: Number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size;

	if (h == NULL)
		return (0);
	size = free_listint_safe_helper(*h, *h, NULL);
	*h = NULL;
	return (size);
}
