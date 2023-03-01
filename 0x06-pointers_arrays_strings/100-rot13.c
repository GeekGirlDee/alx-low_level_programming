#include "main.h"
/**
 * rot13 - A function that encrypts code
 * You can only use if statement once in your code and
 * two loops in your code,
 * You are not allowed to use a switch or any ternary operation
 * @s: string to encrypt
 * Return: char value
 */
char *rot13(char *s)
{
	int i;
	int j;

	char encode1[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char encode2[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; encode1[j]; j++)
		{
			if (s[i] == encode1[j])
			{
				s[i] = encode2[j];
				break;
			}
		}
	}
	return (s);
}

