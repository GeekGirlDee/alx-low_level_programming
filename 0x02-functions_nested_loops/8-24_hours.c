#include "holberton.h"
/**
 * jack_bauer - A program that prnts every minute of the day of jack_bauer,
 * starting form 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	hr, mnt;
	for (hr = 0; hr < 24; hr++)
		for (mnt = 0; mnt < 60; mnt++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mnt / 10) + '0');
			_putchar((mnt % 10) + '0');
			_putchar('\n');
		}
}
