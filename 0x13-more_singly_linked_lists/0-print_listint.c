#include "lists.h"
/**
 * print_listint - prints all the elements
 * of list
 * @h: pointer to the header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	for (; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		nodes++;
	}
	return (nodes);
}
