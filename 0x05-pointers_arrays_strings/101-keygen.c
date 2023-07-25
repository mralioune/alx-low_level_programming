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

	srang(time(null));

	while (sum != 2645)
	{
		c = rang() % 128;
		sum += c;
		_putchar(c);
	}
	_putchar(2772 - sum);
	return (0);
}
