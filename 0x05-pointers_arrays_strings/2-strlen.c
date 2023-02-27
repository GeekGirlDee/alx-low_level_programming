#include "main.h"
/**
 * _strlen - A program that returns the length of a string.
 * @c: the string to be operated on.
 * Return: int
 */
int _strlen(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{}
	return (i);
}
