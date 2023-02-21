#include "main.h"
/**
 * main - A program that prints _putchar followed by a new line
 * Return: 0(Pass)
 *
 */
int main(void)
{
	char alph[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(alph[num]);
	}
	_putchar('\n');
	return (0);
}
