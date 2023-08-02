#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: pointer to the head
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	int n;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		n = *h - *h->next;
		if (n > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			m++;
		}
		else
		{
			free(*h);
			*h = NULL;
			m++;
			break;
		}
	}
	*h = NULL;
	return (1);
}
