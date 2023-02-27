#include "main.h"
/**
 * _strlen - A program that returns the length of a string.
 * @c: the string to be operated on.
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
