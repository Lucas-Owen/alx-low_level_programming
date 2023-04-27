#include "list.h"
#include <string.h>

/**
 * add_node_end - Add a node at the end of a linked list
 * @head: The list_t
 * Return: The address of the new element or (NULL)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(new->str);

	if (head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
