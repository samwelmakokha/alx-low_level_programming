#include "lists.h"

/**
 * free_listint_safe - this funct frees a linked list
 * @h: a pointer that points to the first node in the linked list
 *
 * Return: no. of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int difft;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difft = *h - (*h)->next;
		if (difft > 0)
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
