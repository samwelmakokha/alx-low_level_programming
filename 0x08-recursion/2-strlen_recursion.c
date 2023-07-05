#include "main.h"
/**
 * _strlen_recursion - function that Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lngth = 0;

	if (*s)
	{
		lngth++;
		lngth += _strlen_recursion(s + 1);
	}

	return (lngth);
}
