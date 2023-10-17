#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, j, n, len, k, x;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	k = 0;
	x = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && k == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			x = s[i] - '0';
			if (j % 2)
				x = -x;
			n = n * 10 + x;
			k = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			k = 0;
		}
		i++;
	}

	if (k == 0)
		return (0);

	return (n);
}
