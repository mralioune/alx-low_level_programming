#include "main.h"
#include <stdio.h>

/**
* print_to_98  - print count to 98
* @a: number input
* followed by a new line
* Return: countdown to 98
*/

void print_to_98(int a)
{
	if (a >= 98)
	{
		while (a >= 98)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
			else
				printf("\n");
			a++;
		}
	}
	else
	{
		while (a <= 98)
		{
			printf("%d", a);
			if (a != 98)
				printf(", ");
			else
				printf("\n");
			a++;
		}
	}
}
