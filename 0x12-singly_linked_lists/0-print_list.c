#include "lists.h"
/**
 * print_list - prints all elements of a list
 * @h: pointer
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	char *str = 0;
	size_t node_numbers = 0;

	while (current)
	{
		str = current->str;

		if (str)
			printf("%s\n", current, str);
		else
			printf("[0] (nil)\n");
		current = current->next;
		node_numbers++;
	}
	return (node_numbers);
}
