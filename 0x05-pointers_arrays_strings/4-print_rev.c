#include "main.h"

/**
 *  _puts - hat prints a string
 * @str: input parametre
 * Return : s
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar("\n");
}
