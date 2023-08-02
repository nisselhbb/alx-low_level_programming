#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the header
 * Return: the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL;
	listint_t *current = *haed;
	listint_t *j;

	while (current != NULL)
	{
		next = current->next;
		current->next = i;
		i = current;
		current = next;
	}
	*head = i;
	return (*head);
}
