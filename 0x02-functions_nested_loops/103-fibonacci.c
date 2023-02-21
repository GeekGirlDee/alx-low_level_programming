#include <stdio.h>
/**
 * main - A program that prints the Fibonacci sequence and generated
 * by adding the previous two terms. By starting with 1 and 2
 * the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
 * The Fabonicci sequence whose values do not exceed 4,000,00
 * followed by a new line
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, sum = 0, tot = 2;

	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if (sum % 2 == 0)
		{
			tot += sum;
		}
		printf("%li\n", tot);
		return (0);
	}
}
