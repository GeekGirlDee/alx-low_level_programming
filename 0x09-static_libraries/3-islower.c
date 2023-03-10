#include "holberton.h"
/**
 * _islower - A program that checks for lowercase character
 * @c: is lowercase return 1 else return 0
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
