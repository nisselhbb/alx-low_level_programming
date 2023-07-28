#include "lists.h"
/**
 * list_len - returns the number of elements
 * in a linked list
 * @h: pointer to the head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int nodes_count = 0;

	while (h)
	{
		h = h->next;
		nodes_count++;
	}
	return (nodes_count);
}
