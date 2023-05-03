#include "lists.h"

/**
 * listint_len - this returns the number of elements ina linked list
 * @h: the linked list of type listint_t
 * Return: all the nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		numb++;
		h = h->next;
	}

	return (numb);
}
