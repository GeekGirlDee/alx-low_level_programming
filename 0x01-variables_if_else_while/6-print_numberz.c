#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - A program that prints all single digit number of base
 * 10 starting from 0, followed by a new line
 * Return: 0 (pass)
 */
int main(void)
{
	char alph = '0';

	while (alph <= '9')
	{
		putchar('\n');
		alph++;
	}

	putchar('\n');
	return (0);
}
