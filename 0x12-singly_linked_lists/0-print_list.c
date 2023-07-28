#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: pointer to the head
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int length;
	char *str = 0;
	int node_numbers = 0;

	while (h)
	{
		length = h->length;
		str = h->str;

		if (str)
			printf("[%d] %s\n", length, str);
	       h = h->next;
		node_numbers++;
		if (str == NULL)
			printf("[0] (nil)\n");
	}
	return (node_numbers);
}
