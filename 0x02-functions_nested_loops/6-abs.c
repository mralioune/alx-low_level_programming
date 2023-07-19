#include "main.h"

/**
 * _abs - Write a program that prints _putchar, followed by a new line
 * @c: int  checking character
 * Return: if c is not lower  return 0 else 1
 */

int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (-c);
}
