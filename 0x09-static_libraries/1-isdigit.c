#include "main.h"

/**
 * _isdigit - A progrma that checks for a digit 0 through 9
 * @c: if c is a digit return 1 else return 0
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
