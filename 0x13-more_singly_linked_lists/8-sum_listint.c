#include "lists.h"
/**
 * sum_listint - returns the sum of all data of
 * a list
 * @head: pointer to the header
 * Return: the sum of all data, or 0 if the list
 * is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	if (!head)
		return (0);
	while (current_node != NULL)
	{
		sum = sum + current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
