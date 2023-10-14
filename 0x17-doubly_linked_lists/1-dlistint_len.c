#include "lists.h"

/**
 * dlistint_len - this funct Counts the no. of elements in a linked dlistint_t list.
 * @h: The head of the dlistint_t list.
 *
 * Return: the funct returns The no. of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	/*this Var stores the no. of elements in the list.*/
	size_t nodes = 0;

	while (h)
	{
	/*Incrementing the element count.*/
	nodes++;


	/*it Moves to the next element.*/
	h = h->next;
	}

	/*the funct Returns the total no. of elements in the list.*/
	return (nodes);
}
