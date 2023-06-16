#include <stdio.h>
/**
 * main - main entry  of the program
 * The program prints all aphabets except e aand q
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
