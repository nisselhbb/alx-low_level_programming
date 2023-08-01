#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position
 * @head: pointer to the header
 * @idx: index of the list where the new node should
 * be added
 * @n: data (n) to be stored in the new node
 * Return: the address of the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current_node;
	listint_t *new_node;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;

	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
