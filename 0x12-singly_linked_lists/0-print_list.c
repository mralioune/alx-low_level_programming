#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to the list to print
* Return: Number & node content
*/

size_t print_list(const list_t *h)
{
	size_t b = 0;
	
	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		b++;
	}
	return (b);
}
