#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index of
 * a dlistint_t list
 * @head: pointer to a pointer to the header of the list
 * @index: the index where the node should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr, *temp;
	unsigned int j;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	curr = *head;
	for (j = 0; j < index && curr != NULL; j++)
		curr = curr->next;
	if (curr->next)
		curr->prev->next = curr->next;
	else
		*head = curr->next;
	free(curr);
	return (1);
}
