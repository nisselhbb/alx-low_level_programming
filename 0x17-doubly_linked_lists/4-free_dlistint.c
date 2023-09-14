#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: pointer to the header to a
 * list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *next = head;

	if (!head)
		return;
	while (curr)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
