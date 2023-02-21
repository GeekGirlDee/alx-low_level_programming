#include "main.h"
/**
 * _abs - A program that computes the absolute value of an integer
 * @n: interger used to get an absolute value
 * Return: void
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
