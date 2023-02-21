#include "main.h"
/**
 * print_alphabet - A program that prints all alphabets in lowercases
 *
 */
void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar (alph);
		alph++;
	}
	_putchar ('\n');
}
