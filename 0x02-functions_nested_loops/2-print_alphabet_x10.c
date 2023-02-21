#include "holberton.h"
/**
 * print_alphabet_x10 - A program that prints 10x the alphabet,
 * in lowercase, followed by a new line
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char alph;
	int num = 0;

	for (; num < 10; num++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
