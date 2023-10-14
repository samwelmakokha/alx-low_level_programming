#include "lists.h"


/*
 * free_dlistint - The funct Frees a linked dlistint_t list.
 * @head: The head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	/* Declares a temporary node pointer. */
	dlistint_t *tmp;


	while (head)
	{
	/* Stores the next node in the temporary ptr. */
	tmp = head->next;
	/* Frees the current node. */
	free(head);
	/* Moves to the next node. */
	head = tmp;
	}
}
