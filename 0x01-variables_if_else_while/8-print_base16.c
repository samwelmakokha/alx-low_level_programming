#include <stdio.h>
/**
 *main - main function of the program
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
