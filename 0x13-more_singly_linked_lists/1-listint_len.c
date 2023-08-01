#include "lists.h"
/**
 * listint_len - returns the number of
 * elements in a linked list
 * @h: pointer to the header
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	int nodes_number = 0;


	for (; h != NULL; h = h->next)
	{
		nodes_number++;
	}
	return (nodes_number);
}
