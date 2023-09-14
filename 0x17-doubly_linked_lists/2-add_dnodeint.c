#include "lists.h"
/**
 * add_dnodeint - add a new node at the beginning
 * of a list
 * @head: pointer to a pointer to the header of the
 * list
 * @n: the new node
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
		new_node->next = NULL;
	new_node->prev = NULL;
	*head = new_node;

	return (new_node);
}
