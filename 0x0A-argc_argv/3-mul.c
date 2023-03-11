#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints the multiplication of two numbers,
 * followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 1 - An error will be printed if the program doesn't
 * get two arguments
 * 0 - A success will be printed if two arguments are found by the program
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);
}
