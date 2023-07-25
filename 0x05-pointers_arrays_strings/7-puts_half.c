#include "main.h"

/**
 * puts_half - hat prints a string
 * @str: input parametre
 * Return : s
 */

void puts_half(char *str)
{
	int a = 0, b, c = 0;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = (a / 2) - 1;
		while (str[c] != '\0')
		{
			if (c >= b)
				_putchar(str[c]);
			c++;
		}
	}
	else
	{
		b = a / 2;
		while (str[c] != '\0')
		{
			if (c >= b)
				_putchar(str[c]);
			c++;
		}
	}
	_putchar('\n');
}
