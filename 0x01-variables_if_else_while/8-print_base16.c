#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all numbers of base 16
 * in lowercase, followed by anew line
 * Return: 0 (Pass)
 */
int main(void)
{
	char alph;

	for (alph = '0'; alph <= '9'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'a'; alph <= 'f'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
