#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Input string
 * Return: returns string in reverse
 */

void rev_string(char *s)
{
	char r = s[0];
	int counter = 0;
	int j;

	while (s[counter] != '\0')
	counter++;
	for (j = 0; j < counter; j++)
	{
		counter--;
		r = s[j];
		s[j] = s[counter];
		s[counter] = r;
	}
}
