#include "main.h"

/**
 * *_memcpy -  bytes of the memory area pointed to by
 * @s: constant byte
 * @b: variable
 * @n: varible
 * Return: change array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int b = n;

	for (; a < b; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}
