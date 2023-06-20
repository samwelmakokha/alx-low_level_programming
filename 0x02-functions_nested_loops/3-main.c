#include "main.h"
/**
 * main - check code
 * return: success(0)
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar('\n');
	return (0);
}
