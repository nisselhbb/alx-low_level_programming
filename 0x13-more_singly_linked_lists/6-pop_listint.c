#include "lists.h"
/**
 * pop_listint - deletes the head node of a
 * list
 * @head: pointer to the header
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (!*head)
	{
		return (0);
	}
	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);
	return (data);
}
