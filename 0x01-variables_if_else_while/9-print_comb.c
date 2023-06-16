#include <stdio.h>
/**
 *main - main entry  of the program
 *
 *Return: returns 0 when the program executes successfully
 */
int main(void)
{
	int j;

	for (j = '0'; j <= '9'; j++)
	{
		putchar(j);
		if (j != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
