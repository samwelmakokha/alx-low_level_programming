#include <stdio.h>
/**
 *main - main entry point of the program
 *A program that prints alphabets in upper and lower case
 *
 * Return: returns zero when a program executes successfully
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
