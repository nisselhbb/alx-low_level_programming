#include "list.h"
/**
 * free_list - frees a list
 * @head: pointer to the head
 * Return: no return
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next = head;

	if (!head)
	{
		return;
	}
	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}

