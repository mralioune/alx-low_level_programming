#include "main.h"
#include "stdio.h"

/**
 * print_alphabet_x10 - Write a function that prints the alphabet
 * Return: void print_alphabet void
 *You can only use _putchar twice in your code
 */

int print_alphabet_x10(void)
{
	char alphabet;
	int num;

	alphabet = 'a';
	for (numb = 0 ; numb <= 10 ; numb++)
	{
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}
	return (0);
}
