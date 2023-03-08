#include "main.h"
/**
 * _pow_recursion - A function that returns the value
 * of x raised to the power of y.
 * @x: value in number
 * @y: sqaure the value of x
 * Return: output
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}

