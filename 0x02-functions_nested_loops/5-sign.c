#include "main.h"

/**
 * print_sign - Write a program that prints _putchar, followed by a new line
 * @c: int  checking character
 * Return: if c is not lower  return 0 else 1
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+')
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0')
		return (0);
	}
	else
	{
		_putchar('-')
		return(-1)
	}
}
