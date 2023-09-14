#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end
 * of a linked list
 * @head: pointer to a pointer to the header of a
 * list
 * @n: value you to be stored in the new node
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		while (current->next)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
