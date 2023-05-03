#include "lists.h"

/**
 * free_listint_safe - empties a linked list
 * @h: Points to the first node int he linked list
 * Return: All the elements in the emptied list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int meg;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		meg = *h - (*h)->next;
		if (meg > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
