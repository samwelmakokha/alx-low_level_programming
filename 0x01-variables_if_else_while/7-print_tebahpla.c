#include <stdio.h>
/**
 *main - main entry of the program
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
