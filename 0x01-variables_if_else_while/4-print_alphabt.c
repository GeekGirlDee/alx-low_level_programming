#include <stdio.h>
/**
 * main - A program that prints the alpahbet in lowercase,
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		if ((alph != 'e' && alph != 'q') && alph <= 'z')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
