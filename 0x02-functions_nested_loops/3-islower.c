#include "main.h"
/**
 * int_islower(int c) - checks for lowercase character
 * @c: is the character to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */
int_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
