#include "main.h"
/**
 * print_times_table - Prints the times table
 *
 * @n: The value
 */
void print_times_table(int n)
	{
	int i, j, k;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)

			{
				k = i * j;
				_putchar(44);
				_putchar(32);
				if (k <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(k + 48);
				}
				else if (k <= 99)
				{
					_putchar(32);
					_putchar((k / 10) + 48);
					_putchar((k % 10) + 48);
				}
				else
				{
					_putchar(((k / 100) % 10) + 48);
					_putchar(((k / 10) % 10) + 48);
					_putchar((k % 10) + 48);
				}
				_putchar('\n');
			}
		}
	}
}
