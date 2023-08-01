#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a
 * linked list
 * @head: pointer to the header
 * @index: the index of the node
 * Return: the nth node, or NULL if node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = head;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		current_node = current_node->next;
		if (current_node == NULL)
			return (NULL);
	}
	return (current_node);
}
