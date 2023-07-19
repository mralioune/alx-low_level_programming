#include "main.h"
#include <stdio.h>

/**
 * _isalpha - Write a program that prints _putchar, followed by a new line
 * @c: int  checking character
 * Return: if c is not lower  return 0 else 1
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
