#include "main.h"
/**
 * _strcat - A function that concatenates two strings.
 * @dest: return a pointer to the resulting string
 * @src: does not need to be null-terminated if it contains n or more bytes
 * Return: char value
 */
char *_strcat(char *dest, char *src)
{
		int i = 0;
			int j = 0;

				while (dest[i] != '\0')
						{
									i++;
										}
					while (src[j] != '\0')
							{
										dest[i + j] = src[j];
												j++;
													}
						i++;
							return (dest);
}

