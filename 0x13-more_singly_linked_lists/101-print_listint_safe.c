#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this funct counts the no. of unique nodes
 * in a looped listint_t linked list.
 * @head: this ptr points to the head of the listint_t to check
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the no. of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *har;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tortoise == har)
		{
			tortoise = head;
			while (tortoise != har)
			{
				nodes++;
				tortoise = tortoise->next;
				har = har->next;
			}

			tortoise = tortoise->next;
			while (tortoise != har)
			{
				nodes++;
				tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		har = (har->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this funct Prints a listint_t list safely.
 * @head: points to the head of the listint_t list.
 *
 * Return: The no. of nodes in the list.
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
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
