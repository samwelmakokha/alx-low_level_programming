#include "main.h"

/**
 * flip_bits - the funct counts the no. of bits to change
 * to get from one number to another.
 * @n: this is first number
 * @m: it's second number
 *
 * Return: returns number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
