#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *i = head;
	const listint_t *j = head;
	size_t count = 0;

	while (j != NULL && j->next != NULL)
	{
		printf("[%p] %d\n", (void *)i, i->n);
		count++;
		i = i->next;
		j = j->next->next;

		if (i == j)
		{
			printf("-> [%p] %d\n", (void *)i, i->n);
			exit(98);
		}
	}
	while (i != NULL)
	{
		printf("[%p] %d\n", (void *)i, i->n);
		count++;
		i = i->next;
	}
	return (count);
}
