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
	char alphaArr[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alphaArr[j] != '\0'; j++)
		{
			if (s[i] == alphaArr[j])
			{
				s[i] = alphaArr[j + 1];
				break;
			}
		}
	}
	return (s);
}
