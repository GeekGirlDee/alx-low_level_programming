#include "holberton.h"
/**
 * print_sign - A program that prints the sign of a number
 * @n: if n is grater than 0 and prints + return 0, elseif n
 * is 0 and print 0 return 0 else if n is less than 0 and
 * prints - return -1
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
