#include "main.h"

/**
 * _isupper - A program that checks for uppercase character
 * @c: if c is uppercase return 1 else return 0
 * Return: 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
