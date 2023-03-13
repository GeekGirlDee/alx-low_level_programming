#include "main.h"
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings
 * @s1: first concat string function that concatenates two strings
 * @s2: second concat string
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (i + ci + 1));

	if (concat == NULL)
		return (NULL);
	i = ci = 0;

	while (s1[i] != '\0'; i++)
	{
		concat[i] = s1[i];
	}

	while (s2[ci] != '\0'; i++)
	{
		concat[i] = s2[ci];
		ci++;
	}
	concat[i] = '\0';
	return (concat);
}

