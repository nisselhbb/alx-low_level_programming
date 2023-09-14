#include "lists.h"
/**
 * dlistint_len - returns th number of elements
 * in a linked list
 * @h: pointer to the header of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
