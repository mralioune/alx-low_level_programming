#include "main.h"

/**
 * rev_string - hat prints a string
 * @str: input parametre
 * Return : s
 */

void rev_string(char *str)
{
	int a = 0, b, e;
	char c;

	while (str[a] != '\0')
	{
		a++;
	}

	e = a -	1;

	for (b = 0; b < a / 2; b++)
	{
		c = str[b];
		str[b] = str[e];
		str[e--] = c;
	}

}
