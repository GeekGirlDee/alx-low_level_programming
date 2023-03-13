/*
 * _putchar - A fuction that writes the character c to stdout
 * @c: Character to print
 * Return: 1 Success, -1 Error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
