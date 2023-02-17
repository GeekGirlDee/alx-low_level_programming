#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all possible combinations
 * of single-digit numbers
 * Return: 0 (pass)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar(48 + a);
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
}
