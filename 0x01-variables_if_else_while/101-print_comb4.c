#include <stdio.h>
/**
 *main - main function of the program
 *
 *Return: returns 0 when the program executes succesfully
 */
int main(void)
{
	int k, j, m;

	for (k = '0'; k < '9'; k++)
	{
		for (j = k + 1; j <= '9'; j++)
		{
			for (m = j + 1; m <= '9'; m++)
			{
			if ((j != k) != m)
			{
			putchar(k);
			putchar(j);
			putchar(m);
			if (k == '7' && j == '8')
				continue;
			putchar(',');
			putchar(' ');
			}
			}
		}

	}
	putchar('\n');
	return (0);
}
