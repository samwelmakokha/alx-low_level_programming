#include <stdio.h>
/**
 *main - main entry point of the program
 *
 * Return: returns 0 when the program executes successfully
 */
int main(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		putchar(j + '0');
	}
	putchar('\n');
	return (0);
}
