#include "lists.h"
#include <string.h>

/**
 * add_node_end - Add a node at the end of a linked list
 * @head: The list_t
 * @str: A char * to be added to the new node
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
	if (new->str != NULL)
		new->len = strlen(new->str);
	else
		new->len = 0;
	if (head == NULL)
		return (new);
	if (*head == NULL)
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
