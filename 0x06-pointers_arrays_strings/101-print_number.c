#include "main.h"

/**
 * print_number - A function that prints an integer
 * you can only use _putchar function to print,
 * you are not allowed to use long data type, arrays,
 * pointers or hard-code special values
 * @n: integer to be printed;
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
		print_number(n1 / 10);
		_putchar((n1 % 10) + '0');
}
