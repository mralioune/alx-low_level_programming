#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - is positive or negative
 * print new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	for (a = 'A'; a <= 'Z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
