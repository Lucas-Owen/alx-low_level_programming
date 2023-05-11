#include "lists.h"
#include <stdio.h>


/**
 * is_node_visited - Checks if a node has been visited in a linked list
 * to avoid loops
 * @head: The linked list containing all the nodes
 * @node: A new node to check if it has been visited
 * @prev: The node just before node, this is where to stop the search
 * Return: 1 if the node is in the list, 0 otherwise
 */
int is_node_visited(listint_t *head, listint_t *node, listint_t *prev)
{
	if (prev == NULL || node == NULL)
		return (0);
	do {
		if (head == node)
			return (1);
		head = head->next;
	} while (head != prev);
	return (0);
}

/**
 * print_listint_safe - Prints all the elements of a list_t list
 * can print lists with a loop
 * Exits with status 98 if fails
 * @head: The list_t
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	listint_t *temp = (listint_t *) head;
	listint_t *prev = NULL;

	while (temp != NULL)
	{
		if (is_node_visited((listint_t *) head, temp, prev))
		{
			printf("-> [%p] %d\n", (void *) temp, temp->n);
			return (size);
		}
		printf("%d\n", temp->n);
		size++;
		prev = temp;
		temp = temp->next;
	}
	return (size);
}
