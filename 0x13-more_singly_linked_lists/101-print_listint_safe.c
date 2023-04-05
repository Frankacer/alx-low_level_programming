#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: A pointer to the head node of the list.
 * Return: The number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *loop_node;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current->next >= current)
		{
			loop_node = current;
			while (loop_node != NULL && loop_node < current->next)
			{
				count++;
				printf("[%p] %d\n", (void *)loop_node, loop_node->n);
				loop_node = loop_node->next;
			}
			printf("-> [%p] %d\n", (void *)loop_node, loop_node->n);
			break;
		}

		current = current->next;
	}

	return (count);
}
