#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position
 * @h: pointer to a pointer to the header list
 * @idx: the index of the list where the new node should be
 * added
 * @n: value to be stored in the new node;
 *
 * Return: the address of the new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *curr;
	unsigned int i;

	if (!h)
		return (NULL);
	curr = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; curr && i < idx - 1; i++)
		curr = curr->next;
	if (!curr)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = curr->next;
	new->prev = curr;
	if (curr->next)
		curr->next->prev = new;
	curr->next = new;
	return (new);
}
