#include "lists.h"


/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	/*Declares new node pointers.*/
	dlistint_t *new, *last;


	/*Allocates memory for the new node.*/
	new = malloc(sizeof(dlistint_t));
	/*Checks if memory allocation failed*/
	if (new == NULL)
	/*Returns NULL if allocation failed.*/
	return (NULL);


	/*Sets the value of the new node to the provided integer.*/
	new->n = n;
	/*Sets the next ptr of the new node to NULL.*/
	new->next = NULL;


	/*Checks if the list is empty.*/
	if (*head == NULL)
	{
	/*Sets the previous ptr of the new node to NULL.*/
	new->prev = NULL;
	/*Updates the head ptr to point to the new node.*/
	*head = new;
	/*Returns the address of the new node.*/
	return (new);
	}


	/*Initializes a ptr to traverse the list.*/
	last = *head;
	/*Finds the last node in the list.*/
	while (last->next != NULL)
	last = last->next;
	/*Sets the next pointer of the last node to the new node.*/
	last->next = new;
	/*Sets the previous pointer of the new node to the last node.*/
	new->prev = last;


	/*Returns the address of the new node.*/
	return (new);
}
