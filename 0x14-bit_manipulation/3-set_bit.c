#include "main.h"

/**
 * set_bit - the funct sets a bit at a given index to 1
 * @n: the pointer that poiints to the number to change.
 * @index: index of the bit to set to 1.
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
