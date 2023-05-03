#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This counts the number of unique nodes
 * @head: Points to the head of the listint_t to verify
 * Return: it returns 0 if the list is not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *first, *last;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	last = (head->next)->next;

	while (last)
	{
		if (first == last)
		{
			first = head;
			while (first != last)
			{
				nodes++;
				first = first->next;
				last = last->next;
			}

			first = first->next;

			while (first != last)
			{
				nodes++;
				first = first->next;
			}

			return (nodes);
		}

		first = first->next;
		last = (last->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - This prints a listsafely
 * @head: Points to the head of the list
 * Return: All the number of nodes in a list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);

	}

		return (nodes);
}

