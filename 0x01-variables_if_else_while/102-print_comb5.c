#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all possible combinations
 * of two-digits numbers
 * The numbers should range from 0 to 99
 * The two numbers should be printed with two digits. 1 should
 * be printed as 01
 * The combination of numbers must be separated by comma, followed
 * by a space
 * The combinations of numbers should be printed in ascending order
 * 00 01 and 01 00 are considered as the same combination
 * of the numbers 0 and 1
 * Return: 0 (pass)
 */
int main(void)
{
	int a = 0;
	int a1;
	int a2;
	int b;
	int b1;
	int b2;
	while (a <= 98)
	{
		a1 = (a / 10 + '0');
		a2 = (a % 10 + '0');
		b = 0;
		while (b <= 99)
		{
			b1 = (b / 10 + '0');
			b2 = (b % 10 + '0');
			if (a < b)
			{
				putchar(a1);
				putchar(a2);
				putchar(' ');
				putchar(b1);
				putchar(b2);
				if (a != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
