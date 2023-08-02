#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a linked list
 * @head: pointer to the header
 * @index: the index of the node that should be
 * deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *current_node;
	listint_t *temp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current_node = *head;

	for (j = 0; j < index - 1 && current_node != NULL; j++)
	{
		current_node = current_node->next;
	}
	if (current_node == NULL || current_node->next == NULL)
		return (-1);
	temp = current_node->next;
	current_node->next = temp->next;
	free(temp);
	return (1);
}
