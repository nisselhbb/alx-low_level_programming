#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: pointer
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int *current = h;
	char *str = 0;
	int node_numbers = 0;

	while (h)
	{
		current = h->current;
		str = h->str;

		if (str)
			printf("[%d] %s\n", current, str);
		h = h->next;
		node_numbers++;
		if (str == NULL)
		{
			printf("[0] (nil)\n");
		}
	}
	return (node_numbers);
}
