#include "main.h"

/**
 * _strncat - A function that concatenates n bytes
 * from a string to another
 * @dest: return pointer to the resulting string
 * @src: does not need to be null-terminated if it contains
 * n or more bytes
 * @n: the number of bytes for a str to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
