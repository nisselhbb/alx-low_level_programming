#include "lists.h"
/**
 * print_listint - prints all the elements
 * of list
 * @h: pointer to the header
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len;
	char *str;
	int nodes = 0;

	while (h)
	{
		len = h->len;
		str = h->str;

		if (str)
			printf("[%d] %s\n", len, str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
