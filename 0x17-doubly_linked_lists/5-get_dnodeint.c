#include "lists.h"

/**
 * get_dnodeint_at_index - this funct Locates a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to locate.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the address of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	/* Traverses the list until the desired index is reached. */
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}


6-sum_dlistint.c

#include "lists.h"

/**
 * sum_dlistint - this funct Sums all the data of a dlistint_t list.
 * @head: The head of the dlistint_t list.
 *
 * Return: The function returns the  sum of all the data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
