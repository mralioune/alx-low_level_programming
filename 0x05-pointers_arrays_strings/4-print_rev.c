#include "main.h"

/**
 *  print_rev - hat prints a string
 * @str: input parametre
 * Return : s
 */

void print_rev(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	for (; a > 0; a--)
	{
		_putchar(str[a - 1])
	}

	_putchar('\n');
}
