#include "main.h"
/**
 * _strlen - prints the string length
 * @s: the value
 * Return: returns 0 success
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
