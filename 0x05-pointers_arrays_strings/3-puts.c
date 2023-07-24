#include "main.h"

/**
 * _puts : hat prints a string, followed by a new line, to stdout
 * @s: input parametre
 * Return : s
 */

void _puts(char *s)
{
	while ( *s != "\0" )
	{
		_putchar(*s+++)
	}
	_putchar("\n");

}
