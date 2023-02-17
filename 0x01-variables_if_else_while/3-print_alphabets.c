#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,
 * and then uppercase, followed by a new line.
 * Return: 0(Pass)
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}

	alph = 'A';

	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;

	putchar('\n');
	return (0);
}
