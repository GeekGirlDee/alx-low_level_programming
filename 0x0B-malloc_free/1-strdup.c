#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated memory
 * which contains a copy of the string given as a parameter
 * @str: char value
 * Return: NULL if str == NULL
 */

char *_strdup(char *str)
{
	char *abc;
	int i, r;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
		abc = malloc(sizeof(char) * (i + 1));

	if (abc == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		abc[r] = str[r];
	return (abc);
}
