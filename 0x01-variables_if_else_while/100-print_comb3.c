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
	int num2 = 0;

	while (num2 < 10)
	{
		num1 = 0;
		while (num1 < 10)
		{
			if (num2 != num1 && num2 < num1)
			{
				putchar('0' + num1);
				putchar('0' + num2);

				if (num1 + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			num1++;
		}
		num2++;
	}
	putchar('\n');
	return (0);
}

