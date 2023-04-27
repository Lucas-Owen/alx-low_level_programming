#include "lists.h"
#include <string.h>

/**
 * add_node - Add a node at the beginning of a linked list
 * @head: The list_t
 * @str: String to be stored at new node
 * Return: The address of the new element or (NULL)
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	if (temp->str != NULL)
		temp->len = strlen(temp->str);
	else
		temp->len = 0;
	if (head != NULL)
	{
		temp->next = *head;
		*head = temp;
	}
	return (temp);
}
