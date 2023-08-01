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
	listint_t *temporary;

	while (*head != NULL)
	{
		current_node = *head;
		while ((temporary = current_node) != NULL)
		{
			current_node = current_node->next;
			free(temporary);
		}
		*head = NULL;
	}
}
