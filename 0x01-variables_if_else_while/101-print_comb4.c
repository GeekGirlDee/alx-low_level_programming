#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all possible different
 * combination of three digits
 * Numbers must be separated by a coma , followed by a space
 * The three digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same
 * combination of the three digits
 * Print only the smallest combination of three digits
 * Return: 0 (pass)
 */
int main(void)
{
	int a;
	int b;
	int c;

	while (c < 10)
	{
		b = 0;
		while (b < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (a != b && b != c && c < b)
				{
					putchar('0' + c);
					putchar('0' + b);
					putchar('0' + a);

					if (a + b + c != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				a++;
			}
			b++;
		}
		c++;
	}

	putchar('\n');
	return (0);
}
