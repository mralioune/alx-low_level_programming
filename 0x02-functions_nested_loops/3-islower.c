#include "main.h"
#include <stdio.h>

/**
 * _islower - Write a program that prints _putchar, followed by a new line
 * Return: The program should return 0 or 1
 */

int _islower(int c)
{
	if ( c >='a' && c <='z' )
		return (1);
	else
		return (0);
}
