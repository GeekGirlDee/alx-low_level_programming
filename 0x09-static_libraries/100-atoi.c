#include "main.h"
/**
 * _atoi - A function that convert a string to an integer.
 * you are not allowed to use 'long', declare new variables of
 * type array, hhard-code special values
 * @s: pointer to string
 * Return: 0 (output)
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int res = 0;
	int signal = 1;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (i[s] == '-')
		{
			signal *= -1;
		}
		if (i[s] >= '0' && i[s] <= '9')
		{
			res = res + s[i] - '0';
			if ((*(s + (i + 1)) >= '0') && (*(s + (i + 1)) <= '9'))
				res *= 10;
			else
				break;
		}
	}
	return (res * signal);
}
