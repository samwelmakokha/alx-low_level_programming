#include <unistd.h>
/**
 * _putchar - prints the character to the stdout
 * @c: the character
 * Return: returns 0(success)
 * .
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
