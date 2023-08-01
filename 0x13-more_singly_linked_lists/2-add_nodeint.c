#include "lists.h"
/**
 * add_nodeint - adds a new node at the
 * beginning of a list
 * @head: pointer to the header
 * @n: integer
 * Return: the address of the new element,
 * or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		n = new_node->n;
		new_node->next = *head;
		new_node = *head;
	}
	return (new_node);
}
