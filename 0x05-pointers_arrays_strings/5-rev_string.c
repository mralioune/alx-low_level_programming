#include "main.h"

/**
 * rev_string - hat prints a string
 * @str: input parametre
 * Return : s
 */

void rev_string(char *str)
{
	int a = 0, b;
	char c;

	while (str[a] != '\0')
	{
		a++;
	}
	for (b = 0; b < a ; b++, a--)
	{
		c = str[b];
		str[b] = str[a];
		str[a] = c;
	}

	_putchar('\n');
}
