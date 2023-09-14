#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of
 * a dlistint_t list
 * @head: pointer to the header of a list
 * @index: the index of the node, starting from 0
 * Return: the nth node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = head;

	if (!head)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (!curr)
			return (NULL);
		curr = curr->next;
	}
	return (curr);
}
