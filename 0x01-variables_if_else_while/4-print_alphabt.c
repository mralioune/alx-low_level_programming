#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is ipositive or negative
 * print new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
			putchar(a);
	}
	putchar('\n');
	return (0);
i}
