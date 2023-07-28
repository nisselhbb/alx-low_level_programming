#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: pointer to the head
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int len;
	char *str = 0;
	int node_numbers = 0;

	while (h)
	{
		len = h->len;
		str = h->str;

		if (str)
			printf("[%d] %s\n", len, str);
	       h = h->next;
		node_numbers++;
		if (str == NULL)
			printf("[0] (nil)\n");
	}
	return (node_numbers);
}
