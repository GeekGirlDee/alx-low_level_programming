#include "main.h"
/**
 * main - A program that prints _putchar followed by a new line
 * Return: 0(Pass)
 *
 */
void main(void)
{
	char alph[] = "_putchar";
	int num;

	for (alph = 0; alph < 8; alph++)
	{
		_putchar(alph[num]);
	}
	_putchar('\n');
	return (0);
}
