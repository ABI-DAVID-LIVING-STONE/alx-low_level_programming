#include "lists.h"

/**
 * pop_listint - this deletes the head node of a linked lsit
 * @head: this pointts to the first element in the linked list
 * Return: this is the data inside the element that was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (numb);
}

