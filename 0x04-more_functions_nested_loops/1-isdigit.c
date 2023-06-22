#include "main.h"

/**
 * _isdigit - check if the number is (0 - 9)
 *@c: char to be checked
 *
 * Return: 0 or 1 if the digit is 0 - 9
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

