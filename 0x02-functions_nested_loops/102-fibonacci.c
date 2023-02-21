#include <stdio.h>
/**
 * main - write a program that finds and prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	long num1 = 1, num2 = 2, sum;

	printf("1, 2");
	while (sum < 20365011073)
	{
		sum = num1 + num2;
		printf(", %lu", sum);
		num1 = num2;
		num2 = sum;
	}
	printf("\n");
	return (0);
}
