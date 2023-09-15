#include "lists.h"
/**
 * sum_dlistint - returns the sum of all data in
 * a dlistint_t list
 * @head: pointer to the header of the list
 * Return: the summ of all data, or 0 if the list
 * is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr = head;

	if (!head)
		return (0);
	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
