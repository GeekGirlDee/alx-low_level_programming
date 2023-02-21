#include <main.h>
/**
 * print_alhpabet - A program that prints all alphabets in lowercases
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar('\n');
}
