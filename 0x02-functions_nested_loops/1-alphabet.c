#include "main.h"
#include "stdio.h"

/**
 *Write a function that prints the alphabet
 *, in lowercase, followed by a new line.
 *Prototype: void print_alphabet void
 *You can only use _putchar twice in your code
 **/

int print_alphabet(void)
{
	char alphabet;

	alphabet = "a";
	while (alphabet <= "z")
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar("\n");
}
