#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the header
 * Return: the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL;
	listint_t *j = NULL;

	while (current != NULL)
	{
		j = (*head)->next;
		(*head)->next = i;
		i = *head;
		*head = j;
	}
	*head = i;
	return (*head);
}
