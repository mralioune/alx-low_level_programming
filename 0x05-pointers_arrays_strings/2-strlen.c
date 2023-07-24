#include "main.h"

/**
 * _strlen : that returns the length of a string
 * @s: input parametre
 * Return : s
 */

int _strlen(char *s)
{
	int c;

	c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
}
