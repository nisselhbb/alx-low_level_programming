#include "lists.h"
/**
 * free_listint - frees a list
 * @head: pointer to the header
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
