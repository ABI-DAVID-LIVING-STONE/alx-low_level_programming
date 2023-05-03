#include "lists.h"

/**
 * print_listint - this prints all elements of  a linked list
 * @h: this is is a linked list of type listint_t
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numb++;
		h = h->next;
	}

	return (numb);
}

