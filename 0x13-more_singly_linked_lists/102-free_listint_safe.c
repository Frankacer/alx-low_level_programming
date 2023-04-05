#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to a pointer to the head node of the list.
 *
 * Return: The size of the list that was free'd.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast;
	size_t count = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != NULL && fast < slow)
	{
		free(slow);
		count++;
		slow = fast;
		fast = fast->next;
	}

	free(slow);
	count++;
	*h = NULL;

	return (count);
}
