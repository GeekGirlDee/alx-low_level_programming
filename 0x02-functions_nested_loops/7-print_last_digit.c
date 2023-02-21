#include "main.h"
/**
 * print_last_digit - a program that prints the last digit of a number
 * @n: takes in an integer
 * Return: 0
 */
int print_last_digit(int n)
{
	int num = n % 10;

	if (n < 0)
		num = num * -1;
	_putchar(num + '0');
	return (num);
}
