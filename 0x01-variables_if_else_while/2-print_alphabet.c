#include <stdio.h>
/**
*main - main function of the program
*A program to output alphabet in lower case
*
*Return: returns 0 when the proram executes successfully
*/
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
