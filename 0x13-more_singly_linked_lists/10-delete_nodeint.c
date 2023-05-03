#include "lists.h"

/**
 * delete_nodeint_At_index - this deletes a node in a linked list at a certain
 * @head: this poins to the first element in the list
 * @index: shows the index of the code to delete
 * Return: 1 if succes or -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (a < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

