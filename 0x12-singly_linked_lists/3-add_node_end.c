#include "lists.h"
/**
 * add_node_end - adds a new node at the
 * end of a list
 * @head: pointer to the head
 * @str: pointer to a string
 * Return: the address of the new element,
 * or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current = *head;

	new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (!*head)
		*head = new_node;
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
	}
	return (new_node);
}
