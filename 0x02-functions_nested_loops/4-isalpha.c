#include "main.h"
/**
 * _isalpha - A program that checks for alphabetic character
 * @c: if c is a letter, lowercase or uppercase return 1 else
 * return 0
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
