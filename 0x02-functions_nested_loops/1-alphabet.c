#include "main.h"
/**
 * print_alphabet - A program that prints all alphabets in lowercases
 *
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
