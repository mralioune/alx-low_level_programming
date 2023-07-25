#include "main.h"

/**
 *  _puts - hat prints a string
 * @str: input parametre
 * Return : s
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
