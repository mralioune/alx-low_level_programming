#include "main.h"

/**
 * print_last_digit - computes the absolute value of an integer.
 * @c: int  checking character
 * Return: value last digital
 */

int print_last_digit(int c)
{
	int last = c % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
