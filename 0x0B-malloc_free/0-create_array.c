#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars, and
 * initializes it with a specific char
 * @size: size of an array
 * @c: an initialized character
 * Return: 0 if size is greater than 0 else NULL if is 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
