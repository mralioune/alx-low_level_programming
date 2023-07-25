#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - generates random passwords
* Return: allow 0
*/

int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	while (sum != 2645)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	_putchar(2772 - sum);
	return (0);
}
