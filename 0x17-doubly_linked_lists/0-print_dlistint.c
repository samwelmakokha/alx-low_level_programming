#include "lists.h"

/**
 * print_dlistint - this function Prints all the elements of a dlistint_t list.
 * @h: This is the  head of the dlistint_t list.
 *
 * Return: the funct returns The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	/*This Var  stores the number of nodes in the list.*/
	size_t nodes = 0;

	while (h)
	{
	/*Incrementing the node count.*/
	nodes++;

	/*Printing the value of the current node.*/
	printf("%d\n", h->n);

 	/*Moves to the next node.*/
	h = h->next;
	}

	/*Returns the total number of nodes in the list.*/
	return (nodes);
}
