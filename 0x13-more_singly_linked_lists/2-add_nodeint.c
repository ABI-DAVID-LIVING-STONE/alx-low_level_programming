#include "lists.h"

/**
 * add_nodeint - this adds new nodes at the start of a linked list
 * @head: points right to the first node
 * @n: this reprsents the data to insert in new node
 * Return: the pointer to the new node or return NULL if it does not work
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
