#include "main.h"
/**
 * print_alphabet_x10 - makes alphabet
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	char x;
	int i = 0;

	while (i <= 9)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
