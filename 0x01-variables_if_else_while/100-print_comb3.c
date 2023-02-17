#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all possible different combination
 * of two digits.
 * Numbers must be separated by , ',', followed by a space
 * 01 and 10 are considered the same combination of the
 * two digits 0 and 1
 * Print only smallest combination of two digits
 * Return: 0
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 < 10; num2++)
		{
			putchar((num1 % 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 8 && num2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
