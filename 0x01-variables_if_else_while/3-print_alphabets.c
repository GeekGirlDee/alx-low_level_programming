#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then uppercase, followed by a new line.
 * Return: 0(Pass)
 */
int main(void)
{
	char alphA = 'a';
	char alphB = 'A';

	while (alphA <= 'z')
	{
		putchar(alphA);
		alphA++;
	}

	while (alphB <= 'Z')
	{
		putchar(alphB);
		alphB++;
	}
	putchar('\n');
	return (0);
}
