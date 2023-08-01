#include "main.h"

/**
 * *_memcpy -  bytes of the memory area pointed to by
 * @src: constant byte
 * @dest: variable
 * @n: varible
 * Return: change array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
