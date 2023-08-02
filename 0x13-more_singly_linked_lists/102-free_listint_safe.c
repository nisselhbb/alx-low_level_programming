#include "lists.h"
/**
 * free_listint_safe - frees a list
 * @h: pointer to the head
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t m = 0;
	listint_t *s, *f, *temp;

	if (!h || !*h)
		return (0);
	s = *h;
	f = (*h)->next;
	while (f != NULL && f->next != NULL)
	{
		if (s == f)
		{
			s = *h;
			while (s != f->next)
			{
				temp = s;
				s = s->next;
				free(temp);
				m++;
			}
			free(f);
			m++;
			*h = NULL;
			return (m);
		}
		s = s->next;
		f = f->next->next;
	}
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		m++;
	}
	*h = NULL;
	return (m);
}
