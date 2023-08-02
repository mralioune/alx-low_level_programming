#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_puthars('\n');
		return;
	}
	_putchars(*s);
	_puts_recursion(s + 1);
}
