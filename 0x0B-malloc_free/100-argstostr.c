#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments
 * of your program
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char argstostr(int ac, char **av)
{
	int i, n, r, l;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (r = 0; ; r++;)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}
