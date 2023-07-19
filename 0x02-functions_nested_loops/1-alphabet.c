#include "main.h"
#include "stdio.h"

/**
 * print_alphabet - Write a function that prints the alphabet
 * @alphabet: char
 * Return: void print_alphabet void
 *You can only use _putchar twice in your code
 */

int print_alphabet(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar("\n");
	return (0);
}
