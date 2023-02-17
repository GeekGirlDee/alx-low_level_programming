#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that prints all singlr digit numbers
 * of base 10 starting from 0, followed by a new line
 * Return: 0 (pas)
 */
int main(void)
{
	char alph = '0';

	while (alph <= '9')
	{
		putchar(alph);
		alph++;
	}

	puthchar('\n');
	return (0);
}
