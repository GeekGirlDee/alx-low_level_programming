#include <stdio.h>
/**
 * main - A program tha prints the sum of multiple of 3 or 5
 * that are below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;
	int sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
	return (0);
}
