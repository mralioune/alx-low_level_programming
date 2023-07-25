#include "main.h"

/**
 *  print_rev - hat prints a string
 * @str: input parametre
 * Return : s
 */

void print_rev(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar("\n");
}
