#include "main.h"

/**
 * leet - A function that encodes a string in 1337
 * You can only use two loops in your code and one if statement
 * You are not allowed to use switch statement or any ternary operation
 * @s: string to be encoded
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}

