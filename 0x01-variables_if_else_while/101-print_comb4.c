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
	int num1, num2, num3;

	for (num1 = 48; num1 <= 57; num1++)
		for (num2 = 48; num2 <= 57; num2++)
			for (num3 = 48; num3 <= 57; num3++)
				if (num3 > num2 && num2 > num1)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
					if (num1 != 55 || num2 != 56)
					{
						putchar(',');
						putchar(32);
					}
				}
	putchar('\n');
	return (0);
}
