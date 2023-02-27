#include "main.h"
/**
 * print_rev - A program that prints a string,
 * in reverse followed by a new line
 * @s: input
 * Return: 0 (pass)
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
