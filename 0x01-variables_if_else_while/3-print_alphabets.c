#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then uppercase, followed by a new line.
 * Return: 0(Pass)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
