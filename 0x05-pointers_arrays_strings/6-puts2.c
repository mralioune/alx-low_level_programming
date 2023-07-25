#include "main.h"

/**
 *  _puts2 - hat prints a string
 * @str: input parametre
 * Return : s
 */

void _puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
			_putchar(str[a]);
		a++;
	}

	_putchar('\n');
}
