#include "lists.h"
/**
 * free_listint2 - frees a list & sets the head
 * to NULL
 * @head: the header
 * Return: no return
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
	*head = NULL;
}
