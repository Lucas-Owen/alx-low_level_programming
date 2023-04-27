#include "list.h"
#include <string.h>

/**
 * add_node - Add a node at the beginning of a linked list
 * @head: The list_t
 * Return: The address of the new element or (NULL)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->next = NULL;
	temp->str = strdup(str);
	temp->len = strlen(temp->str);
	if (head == NULL)
	{
		*head = temp;
		return (temp);
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}
