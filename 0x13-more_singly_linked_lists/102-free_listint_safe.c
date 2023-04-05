#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: double pointer.
 *
 * Return:  size of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	listint_t *m, *next;

	if (h == NULL)
	{
		return (i);
	}
	m = *h;
	*h = NULL;

	while (m != NULL)
	{
		next = m;
		m = m->next;
		free(next);
		i++;

		if (next < m)
		{
			break;
		}
	}
	return (i);
}
