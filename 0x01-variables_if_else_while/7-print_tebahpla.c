#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that prints the lowercase alphabet in
 * reverse, followed by a new line
 * Return: 0 (pass)
 */
int main(void)
{
	char alph = 'z';

	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}

	putchar('\n');
	return (0);
}
