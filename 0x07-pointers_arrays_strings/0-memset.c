#include "main.h"

/**
 * *_memset -  bytes of the memory area pointed to by
 * @s: constant byte
 * @b: variable
 * @n: varible
 * Return: change array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
